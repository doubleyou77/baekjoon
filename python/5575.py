for i in range(0, 3):
  sh, sm, ss, eh, em, es = map(int, input().split())

  es -= ss
  if(es < 0):
    em -= 1
    es += 60
  
  em -= sm
  if(em < 0):
    eh -= 1
    em += 60
  
  eh -= sh
  print(eh, em, es)




