#include <iostream>

using namespace std;

int nearest(int i, int x, int * a){
    int i2 = i - 1;
    if(i2 < 0) return a[i];
    int d1 = a[i] - x;
    int d2 = x - a[i2];
    if(d2 <= d1) return a[i2];
    return a[i];
}

int find(int * a, int n, int x){
    int l = 0;
    int r = n - 1;
    while(l < r){
        int p = (l + r )/2;
        if(x <= a[p]){
            r = p;
        }else{
            l = p + 1;
        }
    }
    return nearest(r, x, a);
}

int main(){

    int n, k;
    cin >> n >> k;
    int a[n];
    int x;

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    for(int i = 0; i < k; ++i){
        cin >> x;
        cout << find(a, n, x) << endl;
    }

    return 0;
}