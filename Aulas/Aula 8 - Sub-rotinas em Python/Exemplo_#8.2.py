# Definir uma sub-rotina para mostra um nome
def minha_funcao(pnome, snome, idade):
    print(pnome, snome + ". Idade: ", idade)

minha_funcao("João", "Silveira", 50)
minha_funcao("Maria", "Silveira", 40)
minha_funcao("José", "Silva", 25)

# Valores padrões nas funções
def minha_nacionalidade(pais = "Brasil"):
    print("Eu nasci no(a)", pais)

minha_nacionalidade()
minha_nacionalidade("Suécia")
minha_nacionalidade("Canadá")