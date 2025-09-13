#include <iostream>
using namespace std; 

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int sum = 0;
    int times[4];

    for(int i = 0; i < 4; i++)
    {
        cin >> times[i];
    }

    for(int i = 0; i < 4; i++)
    {
        sum += times[i];
    }

    cout << sum / 60 << "\n" << sum % 60;
}