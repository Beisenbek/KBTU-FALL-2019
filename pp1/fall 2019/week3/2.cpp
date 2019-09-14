#include <iostream>

using namespace std;

int main(){

    int a = 0;

    int b = a + 1;
    int c = 1 + a;
    int d = a++;
    int e = ++a;

    cout << b << " " << c << " " << d << " " << e << endl;
    cout << a << endl;
    
    return 0;
}