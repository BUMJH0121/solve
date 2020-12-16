#include <iostream>
//#include <cstdio>
#include <queue>

using namespace std;
int arr[8] = {0,};
bool visit[8] = {false,};
int answer= 0;

void repeat(int current_weight, int minus_weight, int day, int cut_line);

int main(){
	//freopen("input.txt", "r", stdin);
	int N, K;
	queue <int> q;
	cin >> N >> K;
	for(int i=0; i<N; i++)
		cin >> arr[i];
	for(int i=0; i<N; i++)
	{
		if(500-K+arr[i] >= 500)
		{
			visit[i] = true;
			repeat(500-K+arr[i], K, 1, N);
			visit[i] = false;
		}
	}
	cout << answer << endl;
	return 0;
}

void repeat(int current_weight, int minus_weight, int day, int cut_line){
	if(day == cut_line)
	{
		answer++;
		return;
	}
	else
	{
		for(int i=0; i<cut_line; i++)
		{
			if(visit[i] == false && current_weight-minus_weight+arr[i] >= 500)
			{
				visit[i] = true;
				repeat(current_weight-minus_weight+arr[i], minus_weight, day+1, cut_line);
				visit[i] = false;
			}
		}
	}
	return;
}