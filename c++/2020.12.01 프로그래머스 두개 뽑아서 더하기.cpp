#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    int size = numbers.size();
    for(int i=0; i<size-1; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            int temp = numbers[i] + numbers[j];
            if(answer.size() == 0)
                answer.push_back(temp);
            else
            {
                if(find(answer.begin(), answer.end(), temp) == answer.end())
                   answer.push_back(temp);
            }
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}