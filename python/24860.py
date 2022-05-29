Vk, Jk = map(int, input().split())
Va, Ja = map(int, input().split())
Vh, Dh, Jh = map(int, input().split())

K = Vk*Jk
A = Va*Ja
H = Vh*Dh*Jh

print((K+A)*H)