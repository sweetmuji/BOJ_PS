#include <iostream>
using namespace std; 

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int train[4][2];
    int max = 0;
    int current = 0;

    for(int i = 0; i < 4; i++)
    {
        cin >> train[i][0] >> train[i][1];
    }

    for(int i = 0; i < 4; i++)
    {
        current -= train[i][0];
        current += train[i][1];

        if(current >= max)
        {
            max = current;
        }
    }

    cout << max;
}