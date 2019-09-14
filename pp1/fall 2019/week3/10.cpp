#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int x;
    int m = 100000;

    for(int i = 0; i < n; ++i){
        cin >> x;
        if(x < m){
            m = x;
        }
    }

    cout << m << endl;

    return 0;
}