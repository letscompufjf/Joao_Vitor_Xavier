#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> vetorpar;
    vector<int> vetorimpar;

    for(int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        if(m % 2 == 0)
            vetorpar.push_back(m);
        else
            vetorimpar.push_back(m);

    }
    sort(vetorpar.begin(), vetorpar.end());
    sort(vetorimpar.begin(), vetorimpar.end(), greater<>());
    for(auto x: vetorpar)
        cout << x << "\n";
    for(auto x: vetorimpar)
        cout << x << "\n";
}