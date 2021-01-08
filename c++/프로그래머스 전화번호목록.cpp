#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    sort(phone_book.begin(), phone_book.end());
    int i, j;
    for(i=0; i<phone_book.size(); i++)
    {
        string temp = phone_book[i];
        for(j=i+1; j<phone_book.size(); j++)
        {
            string sub = phone_book[j].substr(0, temp.length());
            if(sub == temp)
            {
                answer = false;
                break;
            }
        }
        if(answer == false)
            break;
    }
    return answer;
}