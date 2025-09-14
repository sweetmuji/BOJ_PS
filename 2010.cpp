#include <iostream>
using namespace std; 

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    int *arr = new int[N];
    int sum = 0;

    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < N; i++)
    {
        if(i == (N-1))
        {
            sum += arr[i];
        }
        else
        {
            sum += arr[i] - 1;
        }
    }

    cout << sum;
}