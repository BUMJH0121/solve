// 문제가 개편되었습니다. 이로 인해 함수 구성이나 테스트케이스가 변경되어, 과거의 코드는 동작하지 않을 수 있습니다.
// 새로운 함수 구성을 적용하려면 [코드 초기화] 버튼을 누르세요. 단, [코드 초기화] 버튼을 누르면 작성 중인 코드는 사라집니다.
#include <string>
#include <vector>
#include <queue>

using namespace std;

queue <int> que;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int i;
    int temp;
    int count = 0;
    while(!que.empty())
        que.pop();
    
    for(i=0; i<progresses.size(); i++)
    {
        temp = (100-progresses[i])/speeds[i];
        if((100-progresses[i])%speeds[i] != 0)
            temp = temp + 1;
        
        que.push(temp);
    }
    temp = que.front();
    while(!que.empty())
    {
        if(temp<que.front())
        {
            answer.push_back(count);
            temp = que.front();
            count = 1;
        }
        else
        {
            count++;
        }
        if(que.size() == 1)
            answer.push_back(count);
        
        que.pop();
    }
    return answer;
}