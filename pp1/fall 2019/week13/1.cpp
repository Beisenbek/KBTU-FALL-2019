#include <iostream>

using namespace std;

int f2(int * a, int l, int r, int n){
    int res = 0;
    int p = -1;
    for(int i = l; i <= r; ++i){
        if(a[i] > p){
            res++;
            p = a[i];
        }
    }
    return res;
}

int f(int * a, int l, int r, int n){
    if(l > r) return 0;
    int res = 1;
    int p = a[l];
    for(int i = l + 1; i <= r; ++i){
        if(a[i] > p){
            res++;
            p = a[i];
        }
    }
    return res;
}

int main(){

    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int q, l, r;
    cin >> q;
    
    for(int i = 0; i < q; ++i){
        cin >> l >> r;
        cout << f(a, l, r, n) << endl;
    }

    return 0;
}