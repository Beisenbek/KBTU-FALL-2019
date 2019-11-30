#include <iostream>

using namespace std;

void increase(int *x){
    (*x)++;
}

int main(){

    int x = 1;
    increase(&x);
    cout << x << endl;


    return 0;
}