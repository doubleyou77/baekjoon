max = 0

for i in range(0, 2):
    inf, mat, sci, eng = map(int, input().split())
    if inf+mat+sci+eng > max:
        max = inf+mat+sci+eng

print(max)    