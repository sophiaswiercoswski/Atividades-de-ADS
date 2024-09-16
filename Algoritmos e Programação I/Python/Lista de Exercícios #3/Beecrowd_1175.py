N = []

for i in range(20):
    N.append(int(input()))

N.reverse()
for i in range(20):
    print(f"N[{i}] = {N[i]}")