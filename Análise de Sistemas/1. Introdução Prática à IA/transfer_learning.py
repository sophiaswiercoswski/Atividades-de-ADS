'''
Segunda Parte - Oficina - VIII SEPEX-Classificação com Transfer Learning.ipynb
Automatically generated by Colab.
'''

# Passo 1: Incluindo as bibliotecas
#!pip install tensorflow
import matplotlib.pyplot as plt
import tensorflow as tf
import numpy as np
from keras.callbacacks import ModelCheckpoint
from tensorflow.keras.models import load_model

# Passo 2: Baixando o Dataset
!wget https://storage.googleapis.com/mledu-datasets/cats_and_dogs_filtered.zip
!unzip cats_and_dogs.filtered.zip
!rm -rf cats_and_dogs.filtered.zip

# Passo 3: Definindo o Dataset
# Define o tamanho desejado para as imagens
IMAGE_SHAPE = (224, 224)
image_shape = (224, 224, 3)

# Define os diretórios para os dados de treinamento e validação
TRAINING_DATA_DIR = 'cats_and_dogs_filtered/train/'
VALID_DATA_DIR = 'cats_and_dogs_filtered/validation/'
class_names = ['gato', 'cachorro']

# Preparando o objeto para redimensionar os valores dos pixels das imagens entre 0 e 1
datagen = tf.keras.prepocessing.image.ImageDataGenerator (
    rescale = 1./255
)

# Criando conjuntos de dados de treinamento e validação a partir dos diretórios
train_generator = datagen.flow_from_directory (
    TRAINING_DATA_DIR,
    shuffle = True, # Embaralha os dados de treinamento
    target_size = IMAGE_SHAPE # Tamanho desejados das imagens
)

valid_generator = datagen.flow_from_directory (
    VALID_DATA_DIR,
    shuffle = False, # Embaralha os dados de treinamento
    target_size = IMAGE_SHAPE # Tamnaho desejado das imagens
)

# Plotando algumas imagens do conjunto de treinamento
def plot_dataset(dataset, num_images = 5):
    batch = next(dataset)

    images = batch[0]
    images = batch[1]
    
    random_indices = np.random.choice(len(images), num_images, replace = False)

    for i, idx in enumerate(random_indices):
        plt.subplot(1, num_images, i + 1)
        plt.imshow(images[idx])
        plt.title(class_names[np.argmax(labels[idx])])
        plt.axis('off')

    plt.show()

plot_dataset(train_generator)

# Passo 4: Transfer Learning
model_transfer_learning = tf.keras.applicatiob.MobileNetV2(input_shape = image_shape, include_top = False, weights = 'imagenet')
model_tranfer_learning.trainable = False
model_transfer_learning.summary()

# Passo 5: Montando o modelo
# Tamanho do lote (batch size) - O n~úmero de amostras de dados processadas em cada iteração de treinamento
batch_size = 32

# Épocas (epochs) - O número de vezes que o modelo passará por todo o conjunto de treinamento durante 
epocs = 5

# Tava de aprendizado (learning rate) - Um hiperparâmetro que controla o quanto o modelo está aprendendo durante o treinamento
learning_rate = 0.0001

# Define o modelo da rede neural
model = tf.keras.Sequential  ([
    tf.keras.layers.InputLayer(shape = image_shape),
    model_transfer_learning,
    tf.keras.layers.GlobalAveragePooling2D(),
    tf.keras.layers.Dropout(0.2),
    tf.keras.layers.Dense(2, activation = 'softmax')
])

# Compila o modelo com otimzador, função de perda e métricas
model.compile (
    optimizer = tf.keras.optimizers.Adam(learning_rate),
    loss = tf.keras.losses.CategoricalCrossentropy(),
    metrics = ['accuracy']
)

print(model.summary())

# Passo 6: Treinamento
# Definindo o histórico de treinamento para acompanhar o progresso
mc = ModelCheckpoint('model.keras', monitor = 'val_accurancy', mode = 'max', verbose = 1, save_best_only = True)

history = model.fit(train_generator, # Usando o gerador de dados de treinamento para alimentar o modelo
        batch_size = batch_size, epochs = epochs,
        validation_data = valid_generator, callback = [mc] # Usando o gerador de dados de validação para avaliar o modelo durante o treinamento
        verbose = 1) # Configurando o nível de detalhe de saída durante o treinamento
        
# Passo 7: Gráficos
# Função para plotar as curvas de aprendizado
def save_plots(train_acc, valid_acc, train_loss, valid_loss):
    plt.figure(figsize = (12, 9))
    plt.plot(train_acc, color = 'green', linestyle = '-', label = 'traom_accuracy')
    plt.plot(valid_acc, color = 'blue', linestyle = '-', label = 'validation accuracy')
    plt.xlabel('Epochs')
    plt.ylabel('Accuracy')
    plt.legend()
    plt.savefig('accuracy.png')
    plt.show()
    plt.figure(figsize = (12, 9))
    plt.plot(train_loss, color = 'orange', linestyle = '', label = 'train_loss')
    plt.plot(valid_loss, color = 'red', linestyle = '-', label = 'validation loss')
    plt.xlabel('Epochs')
    plt.ylabel('Loss')
    plt.legend()
    plt.savefig('loss.png')
    plt.show()

save_plots(train_acc, valid_acc, train_loss, valid_loss)

# Passo 8: Predição
def predict(image_file):
    image = tf.keras.preprocessing.image.load_img(image_file, target_size = IMAGE_SHAPE)
    image = tf.keras.preprocessing.image.img_to_array(image)
    image = image / 255.0

    image = tf.expand_dims(image, 0)
    print(model.predict(image)[0])

    probCat = model.predict(image)[0][0]
    probDog = model.predict(image)[0][1]

    if(probCat > probDog):
        print('GATO')
    else:
        print('CACHORRO')

# Insira uma imagem para testar o modelo
# predict('gato.png')
# predict('cachorro.png')

model = load_model('model.h5')

predict('gato.jfif')
