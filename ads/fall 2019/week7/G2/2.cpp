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
    
    int c[n + m];

    int i = 0;
    int j = 0;
    int k = 0;

    while(i < n && j < m){
        if(a[i] < b[j]){
            c[k] = a[i];
            i++;
        }else{
            c[k] = b[j];
            j++;
        }
        k++;
    }

    while(i < n){
        c[k++] = a[i++];
    }

    while(j < m){
        c[k++] = b[j++];
    }

    for(int i = 0; i < n + m; ++i){
        cout << c[i] << " ";
    }

}