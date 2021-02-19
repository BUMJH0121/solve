import collections
import sys

N = int(input())
global queue
queue = collections.deque()

def command(c):
    global queue
    if "push" in c:
        temp = c[5:]
        queue.append(int(temp))
    elif "pop" in c:
        if len(queue) == 0:
            print(-1)
        else:
            print(queue[0])
            queue.popleft()
    elif "size" in c:
        print(len(queue))
    elif "empty" in c:
        if len(queue) == 0:
            print(1)
        else:
            print(0)
    elif "front" in c:
        if len(queue) == 0:
            print(-1)
        else:
            print(queue[0])
    elif "back" in c:
        if len(queue) == 0:
            print(-1)
        else:
            t = queue.pop()
            print(t)
            queue.append(t)

for i in range (N):
    c = sys.stdin.readline()
    command(c)