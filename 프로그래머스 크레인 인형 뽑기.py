def solution(board, moves):
    answer = 0
    arr = []
    for i in moves:
        for j in range(0, len(board)):
            if board[j][i-1] != 0:
                temp = board[j][i-1]
                board[j][i-1] = 0
                if len(arr) == 0:
                    arr.append(temp)
                else:
                    if arr[len(arr)-1] == temp:
                        arr.pop(len(arr)-1)
                        answer += 2
                    else:
                        arr.append(temp)
                break
    return answer