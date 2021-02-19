import collections
import sys

T = int(input())
queue = []
for t in range (T):
    queue.clear()
    count = 0
    N, M = sys.stdin.readline().split()
    queue = collections.deque(map(int, sys.stdin.readline().split()))
    M = int(M)
    while True:
        if M == 0:
            if max(queue) == queue[M]:
                queue.popleft()
                count = count+1
                print(count)
                break
            else:
                temp = queue.popleft()
                queue.append(temp)
                M = len(queue)-1
        else:
            if max(queue) == queue[0]:
                queue.popleft()
                count = count+1
                M = M -1
            else:
                temp = queue.popleft()
                queue.append(temp)
                M = M -1