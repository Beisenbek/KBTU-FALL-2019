#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int x;
    int m;

    cin >> m;

    for(int i = 1; i < n; ++i){
        cin >> x;
        if(x < m){
            m = x;
        }
    }

    cout << m << endl;

    return 0;
}