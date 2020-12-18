#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(string dirs) {
	int answer = 0;
    vector<char> arr[11][11];
    int i;
    int y_idx = 5;
    int x_idx = 5;
    for(i=0; i<dirs.length(); i++)
    {
        if(dirs[i] == 'U')
        {
            if(y_idx-1 >= 0)
            {
                y_idx -= 1;
                if(arr[y_idx][x_idx].size() == 0)
                {
                    arr[y_idx][x_idx].push_back('U');
                    arr[y_idx+1][x_idx].push_back('D');
                    answer++;
                }
                else
                {
                    if(find(arr[y_idx][x_idx].begin(), arr[y_idx][x_idx].end(), 'U') == arr[y_idx][x_idx].end())
                    {
                        arr[y_idx][x_idx].push_back('U');
                        arr[y_idx+1][x_idx].push_back('D');
                        answer++;
                    }
                }
            }
        }
        else if(dirs[i] == 'R')
        {
            if(x_idx+1 < 11)
            {
                x_idx += 1;
                if(arr[y_idx][x_idx].size() == 0)
                {
                    arr[y_idx][x_idx].push_back('R');
                    arr[y_idx][x_idx-1].push_back('L');
                    answer++;
                }
                else
                {
                    if(find(arr[y_idx][x_idx].begin(), arr[y_idx][x_idx].end(), 'R') == arr[y_idx][x_idx].end())
                    {
                        arr[y_idx][x_idx].push_back('R');
                        arr[y_idx][x_idx-1].push_back('L');
                        answer++;
                    }
                }
            }
        }
        else if(dirs[i] == 'D')
        {
            if(y_idx+1 < 11)
            {
                y_idx += 1;
                if(arr[y_idx][x_idx].size() == 0)
                {
                    arr[y_idx][x_idx].push_back('D');
                    arr[y_idx-1][x_idx].push_back('U');
                    answer++;
                }
                else
                {
                    if(find(arr[y_idx][x_idx].begin(), arr[y_idx][x_idx].end(), 'D') == arr[y_idx][x_idx].end())
                    {
                        arr[y_idx][x_idx].push_back('D');
                        arr[y_idx-1][x_idx].push_back('U');
                        answer++;
                    }
                }
            }
        }
        else if(dirs[i] == 'L')
        {
            if(x_idx-1 >= 0)
            {
                x_idx -= 1;
                if(arr[y_idx][x_idx].size() == 0)
                {
                    arr[y_idx][x_idx].push_back('L');
                    arr[y_idx][x_idx+1].push_back('R');
                    answer++;
                }
                else
                {
                    if(find(arr[y_idx][x_idx].begin(), arr[y_idx][x_idx].end(), 'L') == arr[y_idx][x_idx].end())
                    {
                        arr[y_idx][x_idx].push_back('L');
                        arr[y_idx][x_idx+1].push_back('R');
                        answer++;
                    }
                }
            }
        }
    }
	return answer;
}