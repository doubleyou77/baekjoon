P, S = map(int, input().split())

if P < S:
  print(-1)
else:
  a = (P+S)//2
  b = (P-S)//2
  if (a+b == P) and (a-b == S):
    print(a, b)
  else:
    print(-1)
  

  