#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    int x;
    for(int i = 0; i < n; i++){
        cin >> v[x];
    }
    pair<int , int>  menor = {v[0], 0};
    for(int i=1; i < n; i++){
        if(menor.first > v[i]){
            menor = {v[i], i};
        }
    }
    cout<<"Menor valor: "<< menor.first << "\n" << "Posicao: " << menor.second << "/n";
}