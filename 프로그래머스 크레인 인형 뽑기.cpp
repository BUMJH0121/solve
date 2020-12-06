#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> s;
    int i;
    for(i=0; i<moves.size(); i++)
    {
        int idx = 0;
        while(1)
        {
            if(idx == board.size())
                break;
            int temp = board[idx][moves[i]-1];
            if(temp != 0)
            {
                board[idx][moves[i]-1] = 0;
                if(s.size() == 0)
                {
                    s.push(temp);
                    break;
                }
                if(s.top() == temp)
                {
                    answer += 2;
                    s.pop();
                    break;
                }
                else
                {
                    s.push(temp);
                    break;
                }
            }
            idx++;
        }
    }
    return answer;
}