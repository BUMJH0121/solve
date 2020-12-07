#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    string temp = "";
    while(n)
    {
        int edge = n%3;
        n = n/3;
        if(edge == 0)
        {
            n = n-1;
            temp = "4";
        }
        else if(edge == 1)
            temp = "1";
        else
            temp = "2";
        
        answer = temp + answer;
    }
    return answer;
}