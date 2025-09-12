#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[31] = {0, };
    int a = 0;
    int b = 0;

    for(int i = 0; i < 28; i++)
    {
        int n;
        
        cin >> n;
        arr[n] = 1;
    }

    for(int i = 1; i <= 30; i++)
    {
        if(arr[i] == 0 && a != 0)
        {
            b = i;
        }
        else if(arr[i] == 0)
        {
            a = i;   
        }
    }

    if(b < a)
    {
        int temp = a;

        a = b;
        b = temp;
    }

    cout << a << '\n' << b;
    
    return 0;
}