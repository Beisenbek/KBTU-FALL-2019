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

    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }

    return 0;
}