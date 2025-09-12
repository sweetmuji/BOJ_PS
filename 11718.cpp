#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string line;
    while (getline(cin, line)) 
    { 
        cout << line << "\n";   
    }

    return 0;
}