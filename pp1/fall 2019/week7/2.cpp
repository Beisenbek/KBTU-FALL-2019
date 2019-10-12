#include <iostream>
#include <cmath>

using namespace std;

int f(int x){
    int t = sqrt(x);
    if(t * t == x) return t;
    return x;
} 

int main(){

    int n, m, x;
    cin >> n >> m;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> x;
            cout << f(x) << " ";
        }
        cout << endl;
    }

    return 0;
}