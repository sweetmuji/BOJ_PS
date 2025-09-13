#include <iostream>
using namespace std; 

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int L, P;
    int news[5]; 
    cin >> L >> P;
    cin >> news[0] >> news[1] >> news[2] >> news[3] >> news[4];

    for(int i = 0; i < 5; i++)
    {
        cout << news[i] - (L * P) << ' '; 
    }

    return 0;
}