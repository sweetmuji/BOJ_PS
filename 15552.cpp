#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    int a , b = 0;

    cin >> T;
    int* arr = new int[T];

    for(int i = 0; i < T; i++)
    {
        cin >> a >> b;
        arr[i] = a + b;
    }

    for(int i = 0; i < T; i++)
    {
        cout << arr[i] << '\n';
    }

    delete(arr);

    return 0;
}