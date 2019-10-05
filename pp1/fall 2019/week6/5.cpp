#include <iostream>

using namespace std;

int f(int n){
    if(n == 1) return 1;
    return n + f(n-1);
}

int main(){

    int n;
    cin >> n;

    int s = 0;
    for(int i = 1; i <= n; ++i){
        s += i;
    }
    cout << s << endl;

    cout << f(n) << endl;

    return 0;
}