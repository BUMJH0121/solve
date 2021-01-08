#include <iostream>
#include <string>

using namespace std;
int arr[26] = { 0, };

int main()
{
	string S;
	char answer;

	int i;
	int temp;
	int count;
	cin >> S;
	for (i = 0; i < S.length(); i++)
	{
		if (S[i] > 96)
		{
			temp = S[i] - 'a';
			arr[temp] += 1;
		}
		else
		{
			temp = S[i] - 'A';
			arr[temp] += 1;
		}
	}
	temp = 0;
	for (i = 0; i < 26; i++)
	{
		if (temp < arr[i])
			temp = arr[i];
	}
	count = 0;
	for (i = 0; i < 26; i++)
	{
		if (temp == arr[i])
		{
			answer = i + 'A';
			count++;
		}
	}
	
	if (count > 1)
		cout << '?';
	else
		cout << answer;
	return 0;
}