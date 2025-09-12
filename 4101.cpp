#include <iostream>
#include <list>
using namespace std; 

int main(void)
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    list<string> yesnoList;

    while(1)
    {
        int a, b;

        cin >> a >> b;

        if(a > b)
        {
            yesnoList.push_back("Yes");
        }
        else if(a == 0 && b == 0)
        {
            break;
        }
        else
        {
            yesnoList.push_back("No");
        }
    }

    for(auto s : yesnoList)
    {
        cout << s;
        cout << '\n';
    }

    return 0;
}