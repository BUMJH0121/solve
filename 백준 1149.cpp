//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
//#include <cstdio>
#include <algorithm>

using namespace std;


int main() {
    //freopen("input.txt", "r", stdin);
    int N;
    cin >> N;
    int arr[1001][3];
    int dp[1001][3];
    int answer = 0;
    for (int i = 1; i < N+1; i++)
    {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
    dp[1][0] = arr[1][0];
    dp[1][1] = arr[1][1];
    dp[1][2] = arr[1][2];
    for (int i = 2; i < N+1; i++)
    {
        dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + arr[i][0];
        dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + arr[i][1];
        dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + arr[i][2];
    }
    answer = min(min(dp[N][0], dp[N][1]), dp[N][2]);
    cout << answer << endl;
    return 0;
}