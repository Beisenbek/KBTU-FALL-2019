#include <iostream>

using namespace std;

int main(){

    int x = 1;
    cout << &x << endl;
    cout << x << endl;

    int * y = &x;
    cout << *&*y << endl;

    return 0;
}