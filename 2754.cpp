#include <iostream>
#include <string>
using namespace std; 

int main(void)
{
    string a; 
    cin >> a;

    if(a[0] == 'A')
    {
        if(a[1] == '+')
        {
            cout << "4.3";
        }
        else if(a[1] == '-')
        {
            cout << "3.7";
        }
        else
        {
            cout << "4.0";
        }
    }

    if(a[0] == 'B')
    {
        if(a[1] == '+')
        {
            cout << "3.3";
        }
        else if(a[1] == '-')
        {
            cout << "2.7";
        }
        else
        {
            cout << "3.0";
        }
    }

    if(a[0] == 'C')
    {
        if(a[1] == '+')
        {
            cout << "2.3";
        }
        else if(a[1] == '-')
        {
            cout << "1.7";
        }
        else
        {
            cout << "2.0";
        }
    }

    if(a[0] == 'D')
    {
        if(a[1] == '+')
        {
            cout << "1.3";
        }
        else if(a[1] == '-')
        {
            cout << "0.7";
        }
        else
        {
            cout << "1.0";
        }
    }

    if(a[0] == 'F')
    {
        cout << "0.0";
    }

    return 0;
}