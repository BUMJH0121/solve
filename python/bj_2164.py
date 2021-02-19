import collections

N = int(input())
queue = collections.deque([x for x in range(1, N+1)])

while len(queue) != 1:
    queue.popleft()
    temp = queue.popleft()
    queue.append(temp)

print(queue[0])
