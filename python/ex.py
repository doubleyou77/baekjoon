from collections import deque

queue = deque([1,2,3,4])

best = max(queue)
front = queue.popleft()
print(best, front, queue)