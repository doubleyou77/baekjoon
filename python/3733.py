while True:
  try:
    N, S = map(int, input().split())

    print(int(S/(N+1)))
  except:
    break