#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string ans = to_string(n);
    int i;
    for(i=ans.length()-1; i>=0; i--)
    {
        answer.push_back(ans[i]-'0');
    }
    return answer;
}