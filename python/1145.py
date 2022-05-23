l = list(map(int, input().split()))

l.sort()

standard = l[0]

while(1):
  check = 0
  for i in l:
    if(standard % i ==0):
      check += 1
  if(check >= 3):
    print(standard)
    quit()
  standard += 1