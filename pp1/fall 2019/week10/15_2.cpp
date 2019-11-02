#include <iostream>
#include <cmath>

using namespace std;

int f(int x){
    if(x == 0) return 0;
    return f(x / 10) + x % 10;
}

int main(){

    int x;
    cin >> x;

    cout << f(x);

    return 0;
}