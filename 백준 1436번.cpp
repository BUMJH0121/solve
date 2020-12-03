#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int N;
    cin >> N;
    int answer = 665;
    int count = 0;
    while (count != N)
    {
        answer++;
        string find = to_string(answer);
        for (int i = 0; i < find.length() - 2; i++)
        {
            if (find[i] == '6' && find[i + 1] == '6' && find[i + 2] == '6')
            {
                count++;
                break;
            }
        }
    }
    cout << answer;
    return 0;
}