#include <iostream>
#include <string>
using namespace std; 

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string N;
    string M;
    int Ncount = 0;
    int Mcount = 0;

    cin >> N;
    cin >> M;

    for(int i = 0; i < N.length(); i++)
    {
        if(N[i] == 'a')
        {
            Ncount++;
        }
        else if(N[i] == 'h')
        {
            break;
        }
    }

    for(int i = 0; i < M.length(); i++)
    {
        if(M[i] == 'a')
        {
            Mcount++;
        }
        else if(M[i] == 'h')
        {
            break;
        }
    }

    if(Ncount >= Mcount)
    {
        cout << "go";
    }
    else
    {
        cout << "no";
    }
}