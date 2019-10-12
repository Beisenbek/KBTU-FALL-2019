#include <iostream>


using namespace std;

int main(){

    int n;
    cin >> n;

    int d[2*n - 1];

    int k = 0;
    d[k] = n - 1;
    k++;

    for(int i = 1; i < n; i ++){
        for(int j = 0; j < 2; ++j){
            d[k] =  n - i;
            k++;
        }
    }

    int dr[] = {0, 1, 0, -1};
    int dc[] = {1, 0, -1, 0};
    int index = 0;

    int a[n][n];
    int r = 0;
    int c = 0;
    int t = 1;
    a[0][0] = 1;

    for(int i = 0; i < k; ++i){
        for(int j = 0; j < d[i]; ++j){
            r = r + dr[index]; 
            c = c + dc[index]; 
            a[r][c] = ++t;
        }
        index = (index + 1) % 4;
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}