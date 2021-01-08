//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>

using namespace std;

int main() {
	//freopen("input.txt", "r", stdin);
	int G, P;
	int answer = 0;
	cin >> G;
	cin >> P;
	vector<int> v(G+1);
	for (int i = 0; i < P; i++)
	{
		int t;
		cin >> t;
		while (t > 0 && v[t] > 0)
		{
			int temp = v[t];
			v[t] = v[t] + 1;
			t = t - temp;
		}
		if (t <= 0)
			break;
		else
		{
			v[t] = 1;
			answer++;
		}
	}
	cout << answer;
	return 0;
}