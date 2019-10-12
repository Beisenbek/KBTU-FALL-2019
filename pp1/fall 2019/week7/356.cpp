#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    int a[n][m];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }

    int s[n];

    for(int i = 0; i < n; ++i){
        s[i] = 0;
        for(int j = 0; j < m; ++j){
            s[i] += a[i][j];
        }
    }

    int sum = s[0];
    int index = 0;

    for(int i = 1; i < n; ++i){
        if(s[i] > sum){
            sum = s[i];
            index = i;
        }
    }

    cout << sum << endl << index << endl;

    return 0;
}