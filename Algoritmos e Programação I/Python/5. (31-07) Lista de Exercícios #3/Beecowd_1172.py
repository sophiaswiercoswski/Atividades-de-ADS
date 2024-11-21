X = []

for n in range(10):
    X.append(int(input()))

for i in range(len(X)):
    if X[i] <= 0:
        X[i] = 1
    
for i in range(len(X)):
    print(f"X[{i}] =", X[i])