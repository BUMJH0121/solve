#include <iostream>
//#include <cstdio>

using namespace std;

int answer;

int main(int argc, char** argv)
{
	// freopen("input.txt", "r", stdin);
	int N, M, J;
	int i;
	int current;
	int temp;
	 
	answer = 0;
	current = 1;

/*	for (i = 0; i < 21; i++)
	{
		arr[i] = 0;
	}
*/
	 cin >> N >> M;
	 cin >> J;

	 
	 for (i = 1; i < J + 1; i++)
	 {
		 cin >> temp;
		 if (temp > current + M-1)
		 {
			 answer = answer + (temp - (current + M-1));
			 current = current + temp-(current +M-1);
		 }
		 else if (temp < current)
		 {
			 answer = answer + (current - temp);
			 current = current - (current - temp);
		 }
		 else
		 {
			 continue;
		 }
	 }

	

		 // cout << "Case #" << i << endl;
		 cout << answer << endl;
	 

	return 0;
}