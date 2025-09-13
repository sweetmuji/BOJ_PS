#include <iostream>
#include <list>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int N;
    cin >> N;

    int* nums = new int[N];

    for(int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        nums[i] = a;
    }

    for(int i = 0; i < N; i++)
    {
        for(int n = 0; n < nums[i]; n++)
        {
            if(n == 0 || n == nums[i] - 1)
            {
                for(int m = 0; m < nums[i]; m++)
                {
                    cout << '#';
                }

                cout << "\n";
            }
            else
            {
                for(int m = 0; m < nums[i]; m++)
                {
                    if(m == 0 || m == nums[i]-1)
                    {
                        cout << '#';
                    }
                    else
                    {
                        cout << 'J';
                    }
                }

                cout << "\n";
            }
        }

        cout << "\n";
    }
}