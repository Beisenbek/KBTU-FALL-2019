#include <iostream>
#include <algorithm>
using namespace std;

bool f(int x, int y){
    if(x > y) return false;
    return true;
}

int main(){

    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    sort(a, a + n, f);

    int k = 0;

    for(int i = 0; i < n - 1; ++i){
        if(a[i] == a[n-1]){
            k++;
        }
    }

    if(k == 0){
        cout << -1;
    }else{
        cout << k;
    }

    return 0;
}