#include <bits/stdc++.h>
using namespace std;

bool ehIgual(char a[][1001], char b[][1001], int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(a[i][j] != b[j][i]) return false;
        }
    }
    return true;
}

bool espelha(char a[][1001], int n, int m)
{

}


int main()
{
    ios_base::sync_with_stdio(false);
    int m, n;
    cin >> m >> n;
    char mapa[1001][1001];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> mapa[i][j];
        }
    }
    int c;
    if(m == n)
    {
        for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> mapa[i][j];
        }
    }
    }


}