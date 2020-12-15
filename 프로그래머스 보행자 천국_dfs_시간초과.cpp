#include <vector>

using namespace std;

void dfs(int &answer, int x, int y, int dir, int end_x, int end_y, vector<vector<int>> &city_map, bool (&visit)[500][500]);

int MOD = 20170805;
bool visit[500][500] = {false,};
// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
int solution(int m, int n, vector<vector<int>> city_map) {
    int answer = 0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            visit[i][j] = false;
        }
    }
    dfs(answer, 0, 0, 0, m-1, n-1, city_map, visit);
    return answer%MOD;
}

void dfs(int &answer, int x, int y, int dir, int end_x, int end_y, vector<vector<int>> &city_map, bool (&visit)[500][500]){
    if(x == end_x && y == end_y)
    {
        answer++;
        return;
    }
    else
    {
        for(int k=0; k<2; k++)
        {
            if(k==0 && y+1 <= end_y && city_map[x][y+1] != 1 && visit[x][y+1] == false)
            {
                if(city_map[x][y] == 2 && dir == 0)
                {
                    continue;
                }
                else
                {
                    visit[x][y+1] = true;
                    dfs(answer, x, y+1, 1, end_x, end_y, city_map, visit);
                    visit[x][y+1] = false;
                }
            }
            else if(k==1 && x+1 <=end_x && city_map[x+1][y] != 1 && visit[x+1][y] == false)
            {
                if(city_map[x][y] == 2 && dir == 1)
                {
                    continue;
                }
                else
                {
                    visit[x+1][y] = true;
                    dfs(answer, x+1, y, 0, end_x, end_y, city_map, visit);
                    visit[x+1][y] = false;
                }
            }
        }
        return;
    }
}