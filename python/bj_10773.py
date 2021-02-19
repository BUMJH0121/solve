import sys

K = int(input())
stack = []

for i in range (K):
    n = int(sys.stdin.readline())
    if n == 0:
        stack.pop()
    else:
        stack.append(n)

print(sum(stack))