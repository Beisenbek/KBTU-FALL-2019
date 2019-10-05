#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int m = 2 * n - 1;

    char a[n][m];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            a[i][j] = '*';
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n - i - 1; ++j){
            a[i][j] = ' ';
        }
        for(int j = m - 1; j > n + i - 1; --j){
           a[i][j] = ' ';
        }
    }

    int m2 = n * m;
    char b[n][m2];


    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m2; ++j){
            b[i][j] = '.';
        }
    }

    for(int k = 0; k < n; ++k){
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                b[i][j + k * m] = a[i][j];
            }
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m2; ++j){
            cout << b[i][j];
        }
        cout << endl;
    }


    return 0;
}