#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int m;
    cin >> m;
    int b[m];
    for(int i = 0; i < m; ++i){
        cin >> b[i];
    }

    int res[n + m];
    int i = 0;
    int j = 0;
    int k = 0;
    
    while(i < n && j < m){
        if(a[i] < b[j]){
            res[k] = a[i++];
        }
        else {
            res[k] = b[j++];
        }
        k++;
    }

    while(i < n){
        res[k++] = a[i++];
    }

    while(j < m){
        res[k++] = b[j++];
    }

    for(int i = 0; i < n + m; ++i){
        cout << res[i] << " ";
    }

    return 0;
}