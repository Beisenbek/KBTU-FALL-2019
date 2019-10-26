#include <iostream>

using namespace std;

int main(){
    int n, m, c, j, cnt = 0;

    cin >> n >> m >> c;

    int arr[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0;i < n;i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == c){ 
                cnt++; 
                break; 
            }
        }
    }

    cout<<cnt;
}