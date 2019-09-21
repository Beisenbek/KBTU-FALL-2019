#include <iostream>

using namespace std;

bool find(int * a, int n, int x){
    int l = 0;
    int r = n - 1;

    while(l < r){
        int p = (l + r) / 2;
        if(x <= a[p]){
            r = p;
        }else{
            l = p + 1;
        }
    }

    return a[l] == x;
}

int main(){

    int a[] = {1};
    int n = sizeof(a) / sizeof(int);
    int x;
    cin >> x;
    
    if(find(a, n, x) == true){
        cout << "found!";
    }else{
        cout << "not found!";
    }

    return 0;
}