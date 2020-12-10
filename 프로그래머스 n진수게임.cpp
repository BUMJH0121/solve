#include <string>
#include <vector>

using namespace std;

string reverse(string rev);

string solution(int n, int t, int m, int p) {
    string answer = "";
    string tp = "0";
    int i = 1;
    while(1)
    {
        int convert = i;
        string temp = "";
        if(tp.length() > t*m)
            break;
        while(1)
        {
            if(convert%n <10)
                temp = temp + to_string(convert%n);
            else if(convert%n == 10)
                temp = temp + "A";
            else if(convert%n == 11)
                temp = temp + "B";
            else if(convert%n == 12)
                temp = temp + "C";
            else if(convert%n == 13)
                temp = temp + "D";
            else if(convert%n == 14)
                temp = temp + "E";
            else if(convert%n == 15)
                temp = temp + "F";
            convert = convert/n;
            if(convert == 0)
                break;
        }
        tp = tp + reverse(temp);
        i++;
    }
    for(i= p-1; i<t*m; i=i+m)
    {
        answer = answer + tp[i];
    }
    return answer;
}

string reverse(string rev){
    for(int r = 0; r<rev.length()/2; r++)
    {
        char bowl = rev[r];
        rev[r] = rev[rev.length() - 1 - r];
        rev[rev.length()-1-r] = bowl;
    }
    return rev;
}