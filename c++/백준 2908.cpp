#include <iostream>
#include <string>

using namespace std;

int main()
{
	string A, B;
	cin >> A >> B;
	string answer;
	int i;
	for (i = 2; i >= 0; i--)
	{
		if (A[i] > B[i])
		{
			answer.push_back(A[2]);
			answer.push_back(A[1]);
			answer.push_back(A[0]);
			break;
		}
		else if(A[i] < B[i])
		{
			answer.push_back(B[2]);
			answer.push_back(B[1]);
			answer.push_back(B[0]);
			break;
		}
	}
	cout << answer;
	return 0;
}