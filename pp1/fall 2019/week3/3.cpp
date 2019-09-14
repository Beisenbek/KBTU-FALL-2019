#include <iostream>

using namespace std;

int main(){

    int a = 1;
    int b = a++ + ++a;
    //int b = ++a + a++;

    cout << b << endl;
    
    return 0;
}