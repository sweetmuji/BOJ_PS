#include <iostream>
using namespace std; 

int main(void)
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    int num[3];
    int temp = 0;

    cin >> num[0] >> num[1] >> num[2];

    if(num[0] > num[1])
    {
        temp = num[1];
        num[1] = num[0];
        num[0] = temp;

        if(num[1] > num[2])
        {
            temp = num[2];
            num[2] = num[1];
            num[1] = temp;

            if(num[0] > num[1])
            {
                temp = num[1];
                num[1] = num[0];
                num[0] = temp;
            }
        }
    }
    else 
    {
        if(num[1] > num[2])
        {
            temp = num[2];

            num[2] = num[1];
            num[1] = temp;

            if(num[0] > num[1])
            {
                temp = num[1];
                num[1] = num[0];
                num[0] = temp;
            }
        }
    }


    cout << num[0] << ' ' << num[1]  << ' ' << num[2] << '\n';

    return 0;
}