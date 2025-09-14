#include <iostream>
using namespace std; 

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int yut[3][4];
    string result[3];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cin >> yut[i][j]; 
        }
    }

    for(int i = 0; i < 3; i++)
    {
        int count = 0;
        for(int j = 0; j < 4; j++)
        {
            if(yut[i][j] == 0)
            {
                count++;
            }
        }

        switch (count)
        {
            case 0:
                result[i] = 'E';
                break;
            case 1:
                result[i] = 'A';
                break;
            case 2:
                result[i] = 'B';
                break;
            case 3:
                result[i] = 'C';
                break;
            case 4:
                result[i] = 'D';
                break;
        }
    }  
    
    for(int i = 0; i < 3; i++)
    {
        cout << result[i] << "\n";
    }
}