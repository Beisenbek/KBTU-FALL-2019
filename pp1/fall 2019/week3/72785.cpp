#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int s = 0;
    int x;

    for(int i = 0; i < n; ++i){
        cin >> x;
        int t = 0;
        while(x > 0){
            if(x % 10 == 0) t++;
            x = x / 10;
        }
        //cout << t << endl;
        s += t;
    }

    cout << s << endl;

    return 0;
}