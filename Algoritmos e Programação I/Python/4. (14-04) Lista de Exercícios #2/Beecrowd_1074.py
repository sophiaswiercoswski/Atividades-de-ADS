n = int(input())

for n in range (n):
    n = int(input())
    if (n == 0):
        print ("NULL")
    elif (n < 0) and (n % 2 != 0):
        print ("ODD NEGATIVE")
    elif (n > 0) and (n % 2 != 0):
        print ("ODD POSITIVE")
    elif (n < 0) and (n % 2 == 0):
        print ("EVEN NEGATIVE")
    elif (n > 0) and (n % 2 == 0):
        print ("EVEN POSITIVE")