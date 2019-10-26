#include <iostream>

using namespace std;

int main(){

    int n, m, x;
    cin >> n >> m >> x;
    int t, cnt = 0;

    for(int i = 0; i < n; ++i){
        bool found = false;
        for(int j = 0; j < m; ++j){
            cin >> t;
            if(t == x){
                found = true;
            }
        }
        if(found) cnt++;
    }

    cout << cnt;

    return 0;
}