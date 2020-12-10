//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
//#include <cstdio>

using namespace std;


int main() {
    //freopen("input.txt", "r", stdin);
    int L, P, V;
    int cas = 1;
    int answer = 0;
    while (1)
    {
        cin >> L >> P >> V;
        if (L == 0 && P == 0 && V == 0)
            break;
        answer = (V / P) * L;
        if (V % P > L)
            answer += L;
        else
            answer += V % P;
        cout << "Case " << cas << ": " << answer << "\n";
        cas++;
    }
    return 0;
}