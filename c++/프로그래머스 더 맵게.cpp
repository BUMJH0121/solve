#include <string>
#include <vector>
#include <queue>
#include <functional>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue <int, vector<int>, greater <int>> pq;
    int i;
    for(i=0; i<scoville.size(); i++)
    {
        pq.push(scoville[i]);
    }
    while(1)
    {
        if(pq.size() == 1 && pq.top() < K)
            return -1;
        if(pq.top() >= K)
            break;
        int t1 = pq.top();
        pq.pop();
        int t2 = pq.top();
        pq.pop();
        pq.push(t1+(2*t2));
        answer++;
    }
    return answer;
}