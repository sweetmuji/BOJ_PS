#include <iostream>
using namespace std;

int sum(int n)
{
    if(n <= 0)
    {
        return 0;
    }

    return n + sum(n-1);
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m = 0;
    cin >> n;

    m = sum(n);
    cout << m;

    return 0;
}