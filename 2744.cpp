#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    
    cin.tie(NULL);
    cout.tie(NULL);

    string a;

    cin >> a;

    for(int i = 0; i < a.length(); i++)
    {
        if(a[i] >= 97) // 소문자라면
        {
            a[i] -= 32;
        }
        else
        {
            a[i] += 32;
        }
    }

    cout << a;
}