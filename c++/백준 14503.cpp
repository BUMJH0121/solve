#include <iostream>
//#include <cstdio>
#include <queue>

using namespace std;

typedef struct robot{
    int x,y;
    int dir;
}robot;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    //freopen("input.txt", "r", stdin);
    int answer = 1;
    int N, M;
    cin >> N >> M;
    int r, c, d;
    cin >> r >> c >> d;
    int map[50][50] = {0,};
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            cin >> map[i][j];
        }
    }
    robot ro;
    ro.x = r;
    ro.y = c;
    ro.dir = d;
    queue<robot> que;
    que.push(ro);
    map[r][c] = 2;
    while(!que.empty())
    {
        int t_x = que.front().x;
        int t_y = que.front().y;
        int c_d = que.front().dir;
        int t_d = que.front().dir;
        que.pop();
        while(1)
        {
            int n_d = t_d-1;
            if(n_d < 0)
                n_d = 3;
            if(map[t_x + dx[n_d]][t_y + dy[n_d]] == 0)
            {
                robot temp;
                temp.x = t_x + dx[n_d];
                temp.y = t_y + dy[n_d];
                temp.dir = n_d;
                map[t_x+dx[n_d]][t_y+dy[n_d]] = 2;
                answer++;
                que.push(temp);
                break;
            }
            else
            {
                t_d = n_d;
            }
            if(c_d == n_d)
            {
                int s_d = t_d - 2;
                if(s_d == -1)
                    s_d = 3;
                else if(s_d == -2)
                    s_d = 2;
                if(map[t_x + dx[s_d]][t_y+dy[s_d]] != 1)
                {
                    robot t;
                    t.x = t_x + dx[s_d];
                    t.y = t_y+dy[s_d];
                    t.dir = c_d;
                    que.push(t);
                    break;
                }
                else
                {
                    break;
                }
            }
        }
    }
    cout << answer << "\n";
    return 0;
}
