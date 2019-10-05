#include <iostream>

using namespace std;

void print(int a, int b){
    int c = a + b;
    cout << c << endl;
}

int main(){
    int a, b;
    cin >> a >> b;
    print(a, b);

    return 0;
}