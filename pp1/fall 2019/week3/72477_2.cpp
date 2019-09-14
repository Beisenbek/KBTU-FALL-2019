#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int x;
    for(int i = 0; i < n; i++){
        cin >> x;
        if( x % 2 == 1){
            cout << x << " ";
        }
    }

    return 0;
}