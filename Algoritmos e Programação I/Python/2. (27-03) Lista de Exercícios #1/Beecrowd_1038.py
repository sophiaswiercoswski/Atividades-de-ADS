x = int (x)
y = int (y)
preco = 0

if x == 1:
    preco = float (4.00)
elif x == 2:
    preco = float (4.50)
elif x == 3:
    preco = float (5.00)
elif x == 4:
    preco = float (2.00)
else:
    preco = float (1.50)

print ("Total: R$ {:.2f}".format(preco * y))