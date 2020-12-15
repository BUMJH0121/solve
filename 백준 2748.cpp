#include <iostream>
//#include <cstdio>
#include <vector>

using namespace std;

int main() {
	//freopen("input.txt", "r", stdin);
	int n;
	long long answer = 0;
	cin >> n;
	vector <long long> fibo;
	fibo.push_back(0);
	fibo.push_back(1);
	for (int i = 2; i <= n; i++)
	{
		fibo.push_back(fibo[i - 1] + fibo[i - 2]);
	}
	answer = fibo[n];
	cout << answer;
    return 0;
}
