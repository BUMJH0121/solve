#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	long long K;
	long long meter = 0;
	cin >> N >> K;
	vector <int> v;
	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		v.push_back(temp);
		meter += temp;
		if (K < meter)
		{
			cout << i + 1;
			return 0;
		}
	}
	for (int i = N - 1; i >= 0; i--)
	{
		meter += v[i];
		if (K < meter)
		{
			cout << i + 1;
			return 0;
		}
	}
	return 0;
}