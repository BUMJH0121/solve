#include <vector>

using namespace std;

int r[501][501] = {0,};
int d[501][501] = {0,};

int MOD = 20170805;
// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
int solution(int m, int n, vector<vector<int>> city_map) {
    int answer = 0;
    for(int i=0; i<=m; i++)
    {
        for(int j=0; j<=n; j++)
        {
            r[i][j] = 0;
            d[i][j] = 0;
        }
    }
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==1 && j == 1)
            {
                r[i][j] = 1;
                d[i][j] = 1;
            }
            else if(city_map[i-1][j-1] == 0)
            {
                r[i][j] = (r[i][j-1] + d[i-1][j])%MOD;
                d[i][j] = (r[i][j-1] + d[i-1][j])%MOD;
            }
            else if(city_map[i-1][j-1] == 1)
            {
                d[i][j] = 0;
                r[i][j] = 0;
            }
            else if(city_map[i-1][j-1] == 2)
            {
                d[i][j] = d[i-1][j]%MOD;
                r[i][j] = r[i][j-1]%MOD;
            }
        }
    }
    answer = (d[m][n] + r[m][n])/2;
    return answer%MOD;
}
