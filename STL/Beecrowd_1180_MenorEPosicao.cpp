#include <bits/stdc++.h>
using namespace std;

 int main () {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     vector<vector<int>> matrix(5, vector<int>(5));
     pair<int, int> p;
     for(int i = 0; i < 5; i++){
         for(int j = 0; j < 5; j++){
             cin >> matrix[i][j];
             if(matrix[i][j] == 1)
                 {
                     p = {i , j};
                 }
         }}
     cout << (abs(p.first-2) + abs(p.second-2)) << "\n";
     return 0;
 }