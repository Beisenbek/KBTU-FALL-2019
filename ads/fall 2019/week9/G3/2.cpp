#include <iostream>
#include <algorithm>

using namespace std;

void find(int * a, int l, int r){
    if(l == r){
        cout << a[l] << " ";
        return;
    }else{
        int m = (l + r) / 2;
        cout << a[m] << " ";
        find(a, l, m - 1);
        find(a, m + 1, r);
    }
}

int main(){

    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(a) / sizeof(int);

    sort(a, a + n);

    find(a, 0, n - 1);

    return 0;
}