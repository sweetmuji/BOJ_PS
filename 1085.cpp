#include <iostream>
using namespace std; 

int main(void)
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    int x, y, w, h;
    int xMin, yMin;
    cin >> x >> y >> w >> h;

    if((x) >= (w/2)) // 왼쪽에 더 가까움
    {
        xMin = x;
    }
    else // 오른쪽에 더 가까움
    {
        xMin = (w-x);
    }

    if((y) >= (h/2)) // 아래쪽에 더 가까움
    {
        yMin = y;
    }
    else // 위 쪽에 더 가까움
    {
        yMin = (h-y);
    }

    if(xMin >= yMin)
    {
        cout << yMin;
    }
    else
    {
        cout << xMin;
    }

    return 0;
}