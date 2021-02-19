import sys

N = int(input())
global stack
stack = []

def command(c):
    global stack
    if "push" in c:
        temp = c[5:]
        stack.append(int(temp))
    elif "pop" in c:
        if len(stack) == 0:
            print(-1)
        else:
            print(stack[len(stack)-1])
            stack.pop()
    elif "size" in c:
        print(len(stack))
    elif "empty" in c:
        if len(stack) == 0:
            print(1)
        else:
            print(0)
    elif "top" in c:
        if len(stack) == 0:
            print(-1)
        else:
            print(stack[len(stack)-1])


for i in range(N):
    c = sys.stdin.readline()
    command(c)


