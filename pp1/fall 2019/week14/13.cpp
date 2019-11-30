#include <iostream>

using namespace std;

int sum(int * a, int n){
    int res = 0;
    for(int i = 0; i < n; ++i){
        res += *(a + i);
        //res += a[i];
    }
    return res;
}

int main(){

    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(int);
    cout << sum(arr, n);

    return 0;
}