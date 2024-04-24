cont_par = 0
cont_impar = 0
cont_pos = 0
cont_neg = 0

for numero in range(5):
    numero = int(input())
    if numero % 2 == 0:
        cont_par += 1
        if numero > 0:
            cont_pos += 1
        elif numero < 0:
            cont_neg += 1
    elif numero % 2 == 1:
        cont_impar += 1
        if numero > 0:
            cont_pos += 1
        elif numero < 0:
            cont_neg += 1

print (f"{cont_par} valor(es) par(es)")
print (f"{cont_impar} valor(es) impar(es)")
print (f"{cont_pos} valor(es) positivo(s)")
print (f"{cont_neg} valor(es) negativo(s)")