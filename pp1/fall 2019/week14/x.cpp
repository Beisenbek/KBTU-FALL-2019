#include <iostream>

using namespace std;

int z(int x);
int f(int a, int b);

int f(int a, int b){
    return z(a + b);
}

int z(int x){
    return x * x;
}

int main(){

    cout << f(2, 3);


    return 0;
}