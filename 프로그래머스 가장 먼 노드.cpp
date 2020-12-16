#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int n, vector<vector<int>> edge) {
    int answer = 0;
    bool arr[20001][20001] = {false,};
    int dis[20001] = {0,};
    int i;
    int max = 0;
    for(i=0; i<edge.size(); i++)
    {
        arr[edge[i][0]][edge[i][1]] = true;
        arr[edge[i][1]][edge[i][0]] = true;
    }
    queue<pair<int, int>> que;
    que.push(make_pair(1, 0));
    while(!que.empty())
    {
        pair<int, int> temp = que.front();
        int x= temp.first;
        que.pop();
        for(i=2; i<n+1; i++)
        {
            if(dis[i] == 0 && arr[x][i] == true)
            {
                que.push(make_pair(i, temp.second+1));
                dis[i] = temp.second+1;
                if(max < temp.second+1)
                    max = temp.second+1;
            }
        }
    }
    for(i=1; i<n+1; i++)
    {
        if(max == dis[i])
            answer++;
    }
    return answer;
}