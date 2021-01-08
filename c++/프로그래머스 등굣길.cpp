#include <string>
#include <vector>

using namespace std;

int solution(int m, int n, vector<vector<int>> puddles) {
    int answer = 0;
    int arr[101][101] = {0,};
    int i,j;
    for(i=0; i<puddles.size(); i++)
    {
        arr[puddles[i][0]][puddles[i][1]] = -1;
    }
    arr[1][1] = 1;
    for(i=1; i<m+1; i++)
    {
        for(j=1; j<n+1; j++)
        {
            if(arr[i][j] == -1)
                continue;
            if(arr[i-1][j] == -1 || arr[i][j-1] == -1)
            {
                if(arr[i-1][j] == -1 && arr[i][j-1] == -1)
                    continue;
                else if(arr[i-1][j] == -1)
                    arr[i][j] += arr[i][j-1]%1000000007;
                else
                    arr[i][j] += arr[i-1][j]%1000000007;
            }
            else
                arr[i][j] += (arr[i-1][j] + arr[i][j-1])%1000000007;
        }
    }
    answer = arr[m][n];
    return answer;
}