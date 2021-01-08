#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000] = { 0, };

int main(void)
{
    int N;
    cin >> N;
    int i;
    for (i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + N);
    for (i = 0; i < N; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}