n = float(input())

if (n <= 2000.00):
    print ("Isento")
else:
    if (n > 2000.00) and (n <= 3000.00):
        salario = (n - 2000) * 0.08
    elif (n > 3000.00) and (n <= 4500.00):
        salario = (n - 3000) * 0.18 + (1000 * 0.08)
    elif (n > 4500.00):
        salario = (n - 4500) * 0.28 + (1500 * 0.18) + (1000 * 0.08)
    print ("R$ {:.2f}".format(salario))