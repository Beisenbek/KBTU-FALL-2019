#include <iostream>
#include <cmath>

using namespace std;

int f(int x){
    int sum = 0;
    while(x > 0){
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main(){

    int x;
    cin >> x;

    cout << f(x);

    return 0;
}