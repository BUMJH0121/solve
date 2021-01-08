#include <vector>
#include <iostream>
#include <queue>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    queue <int> que;
    int i;
    for(i=0; i<arr.size(); i++)
    {
        if(que.empty())
        {
            que.push(arr[i]);
            answer.push_back(arr[i]);
        }
        else
        {
            if(que.front() != arr[i])
            {
                que.pop();
                answer.push_back(arr[i]);
                que.push(arr[i]);
            }
            else
                continue;
        }
    }

    return answer;
}