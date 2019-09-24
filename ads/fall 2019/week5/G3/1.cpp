#include <iostream>

using namespace std;

bool f(int * a, int n, int x){
    int l = 0;
    int r = n - 1;
    /*
     while(l < r){
        int p = (l + r) / 2;
        if(x < a[p]){
            r = p - 1;
        }else{
            l = p;
        }
    }
    */
    while(l < r){
        int p = (l + r) / 2;
        if(x > a[p]){
            l = p + 1;
        }else{
            r = p;
        }
    }
    if(l == r && a[l] == x) return true;
    return false;
}

int main(){

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};
    int n = sizeof(a) / sizeof(int);
    int x;
    cin >> x;

    cout << f(a, n, x);

    return 0;
}