#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, v, count = 0;

    cin >> N; 

    int* arr = new int[N];

    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    cin >> v;

    for(int i = 0; i < N; i++)
    {
        if(arr[i] == v)
        {
            count++;
        }
    }

    cout << count;

    delete(arr);

    return 0;
}
