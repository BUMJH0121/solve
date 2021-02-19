import collections
import sys

N = int(input())
global deque
deque = collections.deque()

def command(c):
    global deque
    if "push_front" in c:
        temp = c[11:]
        deque.appendleft(int(temp))
    elif "push_back" in c:
        temp = c[10:]
        deque.append(int(temp))
    elif "pop_front" in c:
        if len(deque) == 0:
            print(-1)
        else:
            print(deque[0])
            deque.popleft()
    elif "pop_back" in c:
        if len(deque) == 0:
            print(-1)
        else:
            t = deque.pop()
            print(t)
    elif "size" in c:
        print(len(deque))
    elif "empty" in c:
        if len(deque) == 0:
            print(1)
        else:
            print(0)
    elif "front" in c:
        if len(deque) == 0:
            print(-1)
        else:
            print(deque[0])
    elif "back" in c:
        if len(deque) == 0:
            print(-1)
        else:
            t = deque.pop()
            print(t)
            deque.append(t)

for i in range (N):
    c = sys.stdin.readline()
    command(c)