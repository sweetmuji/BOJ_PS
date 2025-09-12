#include <iostream>
using namespace std; 

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nums[9] = { 0, };
    int count = 0;
    int num;
    int max = 0;

    for(int i = 0; i < 9; i++)
    {
        cin >> nums[i];   
    }

    for(int i = 0; i < 9; i++)
    {
        ++count;

        if(nums[i] > max)
        {
            max = nums[i];
            num = count;
        }
    }

    cout << max << '\n' << num;

    return 0;
}