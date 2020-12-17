#include <string>
#include <vector>
#include <queue>

using namespace std;

int bfs(string a, string b, int ans);

int solution(string begin, string target, vector<string> words) {
    int answer = 0;
    queue<pair<string, int>> que;
    que.push(make_pair(begin, 0));
    while(!que.empty())
    {
        pair<string, int> temp = que.front();
        que.pop();
        if(temp.second > words.size())
        {
            answer = 0;
            return answer;
        }
        for(int i=0; i<words.size(); i++)
        {
            int count = 0;
            for(int j=0; j<words[i].length(); j++)
            {
                if(temp.first[j] == words[i][j])
                    count++;
            }
            if(count == words[i].length()-1)
            {
                if(target == words[i])
                    return temp.second+1;
                que.push(make_pair(words[i], temp.second + 1));
            }
        }
    }
    return answer;
}