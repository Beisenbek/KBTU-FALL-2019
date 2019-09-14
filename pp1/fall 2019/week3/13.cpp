#include <iostream>

using namespace std;

int main(){

    int x;
    cin >> x;
    int s = 0;
    
    for(;x > 0; x /= 10){
        s += x % 10;
    }

    cout << s << endl;


    return 0;
}