cod, quant = input("Digite o código e a quantidade: ").split(' ')
cod = int(cod)
quant = int(quant)
conta = 0

if cod == 1:
    conta = quant * (8.00)
elif cod == 2:
    conta = quant * (12.00)
elif cod == 3:
    conta = quant * (16.00)

print("O valor da conta é R${:.2f}".format(conta))