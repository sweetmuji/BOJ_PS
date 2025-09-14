#include <iostream>
using namespace std; 

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, score = 0;
    int streak = 1;

    cin >> N;
    int* arr = new int[N];

    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < N; i++)
    {
        if(arr[i] == 1)
        {
            int j = i;
            score += streak;
            streak++;
        }
        else
        {
            streak = 1;
        }
    }

    cout << score;

    delete[] arr;
    return 0;
}