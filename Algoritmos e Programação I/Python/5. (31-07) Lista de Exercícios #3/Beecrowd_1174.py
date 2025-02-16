A = []

for cont in range(3):
    A.append(float(input()))

for i in range(len(A)):
    if A[i] <= 10:
        print(f"A[{i}] =", A[i])