#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<string> vetPalavras(n);
    
    for(int i = 0; i < n; i++)
    {
        cin >> vetPalavras[i];
        int tam = vetPalavras[i].length();
        if(tam > 10)
        {
            string palavra = vetPalavras[i];
            string aux = "";
            aux += palavra[0];
            aux += to_string(tam - 2);
            aux += palavra[tam-1];
            vetPalavras[i] = aux;
        }
    }
    for(auto x : vetPalavras)
        cout << x << "\n";
    return 0;
}