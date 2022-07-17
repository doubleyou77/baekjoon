S = list(input())

def re(s):
  for i in s[::-1]:
    print(i, end="")
    s.pop()

tag = False
s = []
for i in S:
  if(i == '<'):
    re(s)
    tag = True
    print(i, end="")
  elif (i == '>'):
    tag = False
    print(i, end="")
  elif tag:
    print(i, end="")
  else:
    if(i == ' '):
      re(s)
      print(i, end="")
    else:
      s.append(i)
re(s)
print()