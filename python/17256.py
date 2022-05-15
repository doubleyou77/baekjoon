#a 🍰 b = (a.z + b.x, a.y × b.y, a.x + b.z)

ax, ay, az = map(int, input().split())
cx, cy, cz = map(int, input().split())

print(cx-az, int(cy/ay), cz-ax)