#include <iostream>

using namespace std;

int main(){

    int a[] = {1,2,3,4,6,7,8,9};
    int n = sizeof(a) / sizeof(int);
    int l = 0;
    int r = n - 1;

    int x;
    cin >> x;

    while(l < r){
        int p = (l + r )/2;
        if(x <= a[p]){
            r = p;
        }else{
            l = p + 1;
        }
    }

    if(l == r && x == a[l]){
        cout << "found!";
    }else{
        cout << "not found!";
    }


    return 0;
}