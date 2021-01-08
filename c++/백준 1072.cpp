//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    //freopen("input.txt", "r", stdin);
    long double X, Y;
    cin >> X >> Y;
    int now = (Y / X) * 100;
    int i = 1;
    int next = now + 1;
    long double answer = 0;
    if (now == 99 || now == 100)
        answer = -1;
    else
    {
        answer = ((next * X) - (100*Y)) / (99 - now);
        if (answer > int(answer))
            answer += 1;
    }
    cout << int(answer) << "\n";
    return 0;
}