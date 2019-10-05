#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int x;
    int cnt = 0;

    for(int i = 0; i < n; ++i){
        cin >> x;
        int t = 0;
        for(int y = 1; y <= x; ++y){
            if(x % y == 0){
                t++;
            }
        }
        if(t == 2){
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}