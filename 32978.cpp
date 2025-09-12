#include <iostream>
#include <unordered_set>
#include <string> 
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    unordered_set<string> ingredients;
    int n;

    cin >> n;

    for(int i = 0; i < n; i++) // 재료 입력 
    { 
        string s;
        cin >> s;
        ingredients.insert(s);
    }

    for(int i = 0; i < n - 1; i++) // 제료 사용
    {
        string s;
        cin >> s;
        ingredients.erase(s);
    }

    for(string a : ingredients)
    {
        cout << a;
    }

    return 0;
}