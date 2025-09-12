#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, X, count = 0;

    cin >> N >> X;

    int* arr = new int[N];

    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < N; i++)
    {
        if(arr[i] < X)
        {
            cout << arr[i] << ' ';
        }
    }

    delete(arr);

    return 0;
}