#include <iostream>
#include <string>
using namespace std; 

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string S;
    int i;

    cin >> S;
    cin >> i;

    cout << S[--i];

    return 0;
}