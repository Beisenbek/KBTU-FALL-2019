#include <iostream>

using namespace std;

int main(){

    int a, b;
    cin >> a >> b;

    int m = min(a, b);

    for(int i = m; i >= 1; --i){
        if(a % i == 0 && b % i == 0){
            cout << i << endl;
            break;
        }
    }

    
    return 0;
}