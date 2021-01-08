#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> three;
    while(1)
    {
        if(n==0)
            break;
        three.push_back(n%3);
        n = n/3;
    }
    for(int i=three.size()-1; i>=0; i--)
    {
        answer= answer + three[i]*pow(3, three.size()-1-i);
    }
    return answer;
}