# Criar uma lista com 5 países
paises = ["Noruega", "Holanda", "Japão", "Brasil", "México"]

# Mostrar todos os países da lista
for pais in paises:
    print(pais)

# Mostrar apenas o primeiro país da lista
print("Primeiro país:", paises[0])

# Mostrar apenas o último país da lista
print("Último país:", paises[4])

# Modificar o segundo e terceiro país da lista
paises[1] = "Espanha"
paises[2] = "Chile"

# Exibir novamente a lista
for pais in paises:
    print(pais)