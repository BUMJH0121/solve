#include <iostream>
//#include <cstdio>

using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	int N;
	int height[100000] = {0,};
	long long sum = 0;
	bool flag = false;
	cin >> N;
	for(int i=0; i<N; i++)
	{
		cin >> height[i];
		sum += height[i];
	}
	
	if(sum%3 == 0)
	{
		int value = sum/3;
		int count_one = 0;
		int count_two = 0;
		
		for(int i=0; i<N; i++)
		{
			if(count_two != value)
			{
				if(value >= count_two + height[i]/2)
				{
					count_two += height[i]/2;
					count_one += height[i]%2;
				}
				else
				{
					count_one += height[i] - 2*(value - count_two);
					count_two = value;
				}
			}
			else
			{
				if(value >= count_one + height[i])
					count_one += height[i];
				else
					break;
			}
			if(i == N-1 && value == count_one && value == count_two)
				flag = true;
		}
	}
	
	if(flag == false)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
	return 0;
}

