#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;

    cin >> N >> M;

    int matrix[100][100] = { 0, };
    int matrix2[100][100] = { 0, };

    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            matrix2[i][j] += matrix[i][j];
        }
    }

    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout << matrix2[i][j] << " ";
        }
    }

    return 0;
}