import queue

def solution(n):
    answer = 0
    arr = queue.LifoQueue()
    while n != 0:
        arr.put(n%3)
        n = n//3
    count = 0
    while not arr.empty():
        answer = answer + arr.get()*(3**count)
        count = count+1
    return answer