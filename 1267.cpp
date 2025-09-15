#include <iostream>
#include <math.h>
using namespace std; 

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, Y, M;
    int* calls = new int[N];

    for(int i = 0; i < N; i++)
    {
        cin >> calls[i];
    }

    for(int i = 0; i < N; i++)
    {
        int s;
        s = ceil((float)calls[i] / (float)30.0);
        Y += s * 10;
    }

    for(int i = 0; i < N; i++)
    {
        int s;
        s = ceil((float)calls[i] / (float)60.0);
        Y += s * 15;
    }

    if(Y < M)
    {
        cout << 'Y' << Y;
    }
    else if(M < Y)
    {
        cout << 'M' << M;
    }
}