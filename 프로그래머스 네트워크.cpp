#include <string>
#include <vector>
#include <queue>

using namespace std;



int solution(int n, vector<vector<int>> computers) {
    int visit[200] = {0,};
    int i;
    queue <int> que;
    int answer = 0;
    
    for(i=0; i<n; i++)
    {
        if(visit[i] == 1)
            continue;
        visit[i] = 1;
        que.push(i);
    while(1)
    {
        int temp = que.front();
        que.pop();
        for(int j=0; j<n; j++)
        {
            if(computers[temp][j] == 1)
            {
                if(visit[j] == 0)
                {
                    visit[j] = 1;
                    que.push(j);
                }
            }
        }
        if(que.empty())
        {
            answer++;
            break;
        }
    }
    }
    return answer;
}