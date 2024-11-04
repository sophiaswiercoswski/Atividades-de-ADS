'''
Título: Jogo Adivinhe o Número
Data: 
Autor: Profe. Berssa
'''

# --> Bibliotecas
from random import randint
from time import sleep

# --> Constantes
EASY_LIMIT = 10  # Limite para o nível fácil
NORMAL_LIMIT = 100  # Limite para o nível normal
HARD_LIMIT = 1000  # Limite para o nível difícil
EASY_TRIES = 3  # Tentativas para o nível fácil
NORMAL_TRIES = 5  # Tentativas para o nível normal
HARD_TRIES = 10  # Tentativas para o nível difícil
SCREEN_WIDTH = 50  # Largura da tela
LINE_CHAR = '='  # Caractere utilizado para desenhar linhas
MARGIN = 4  # Margem para centralização de textos

# --> Funções

# Função para limpar a tela
def clearScreen():
    print('\n' * SCREEN_WIDTH)

# Função para desenhar uma linha de caracteres
def drawLine():
    print(LINE_CHAR * SCREEN_WIDTH)

# Função para mostrar uma mensagem alinhada à esquerda
def showLeftAlignedMessage(msg):
    print(f'{LINE_CHAR} {msg:<{SCREEN_WIDTH - MARGIN}} {LINE_CHAR}')

# Função para mostrar uma mensagem centralizada
def showCenteredMessage(msg):
    print(f'{LINE_CHAR} {msg:^{SCREEN_WIDTH - MARGIN}} {LINE_CHAR}')

# Função para exibir o cabeçalho com uma lista de mensagens
def showHeader(messages):
    drawLine()
    for message in messages:
        showCenteredMessage(message)
    drawLine()

# Função para exibir o cabeçalho de erro
def showErrorHeader():
    errorMessages = ['Entrada Inválida!', 'Tente novamente...']
    showHeader(errorMessages)

# Função para obter a entrada do usuário
def getUserInput(msg):
    option = input(f'{LINE_CHAR} {msg}: ').strip()
    if option == 'q':
        print("TaDaDá")
    return option

# Função para validar a entrada do usuário com base em opções válidas
def validateUserInput(option, validOptions):
    if option in validOptions:
        return True
    else:
        showErrorHeader()
        return False

# Função para sortear o número secreto
def drawSecretNumber(limit):
    return randint(1, limit)

# Função para mostrar uma dica se o palpite está abaixo ou acima do número secreto
def showHint(secretNumber, guess):
    if secretNumber < guess:
        showHeader(['Tente um número menor!'])
    else:
        showHeader(['Tente um número maior!'])

# Função para perguntar se o jogador quer jogar novamente
def playAgain():
    validOptions = ['1', '0']
    showHeader(['Deseja jogar novamente?', '[1] Sim', '[0] Não'])
    option = getUserInput('Escolha uma opção')

    while not validateUserInput(option, validOptions):
        option = getUserInput('Escolha uma opção')

    return option == '1'

# Função principal para iniciar o jogo
def playGame():
    # Recebe o nome do jogador
    playerName = getUserInput("Digite seu nome")

    # Exibe a mensagem de boas-vindas
    showHeader([f'Bem-vindo, {playerName}!', 'JOGO ADIVINHE O NÚMERO'])

    # Escolha de dificuldade
    validOptions = ['1', '2', '3']
    showHeader(['Escolha o nível de dificuldade:', '[1] Fácil', '[2] Normal', '[3] Difícil'])
    difficulty = getUserInput("Digite o número correspondente ao nível")

    while not validateUserInput(difficulty, validOptions):
        difficulty = getUserInput("Digite o número correspondente ao nível")

    # Configurações de acordo com o nível escolhido
    if difficulty == '1':
        limit = EASY_LIMIT
        attempts = EASY_TRIES
    elif difficulty == '2':
        limit = NORMAL_LIMIT
        attempts = NORMAL_TRIES
    else:
        limit = HARD_LIMIT
        attempts = HARD_TRIES

    # Sorteia o número secreto
    secretNumber = drawSecretNumber(limit)

    # Exibe instruções
    showHeader([f'Adivinhe o número entre 1 e {limit}', f'Você tem {attempts} tentativas'])

    # Loop de tentativas
    for tryCount in range(attempts):
        guess = getUserInput('Qual é o seu palpite?')

        # Validação de entrada numérica
        while not guess.isdigit():
            showHeader(['Entrada inválida! Por favor, insira um número.'])
            guess = getUserInput('Qual é o seu palpite?')

        guess = int(guess)

        # Verifica se o palpite é correto
        if guess == secretNumber:
            sleep(1)
            showHeader([f'Parabéns, {playerName}!', 'Você acertou o número!'])
            break
        else:
            showHint(secretNumber, guess)
    else:
        # Mensagem de derrota se o jogador não acertar o número
        sleep(1)
        showHeader([f'Que pena, {playerName}...', f'O número secreto era {secretNumber}', 'Fim de jogo!'])

    # Pergunta se o jogador deseja jogar novamente
    if playAgain():
        playGame()
    else:
        # Mensagem de despedida
        showHeader(['Obrigado por jogar!', 'Até a próxima!'])

# Início do programa
if __name__ == "__main__":
    playGame()