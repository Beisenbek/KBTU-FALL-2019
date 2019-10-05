#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int x;
    int cnt = 0;

    for(int i = 0; i < n; ++i){
        cin >> x;
        bool prime = true;
        for(int y = 2; y * y <= x; ++y){
            if(x % y == 0){
                prime = false;
                break;
            }
        }
        if(prime && x != 1){
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}