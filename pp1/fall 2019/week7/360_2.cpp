#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    int a[n][m];

    int ms = 0;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
            ms = max(ms, a[i][j]);
        }
    }
    
    int winners[n];
    int cnt = 0;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(a[i][j] == ms){
               winners[cnt] = i;
               cnt++;
               break;
            }
        }
    }

    cout << cnt << endl;

    for(int i = 0; i < cnt; ++i){
        cout << winners[i] << " ";
    }
    

    return 0;
}