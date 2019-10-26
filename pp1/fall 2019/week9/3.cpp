#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int d[] = {2, 5, 17, 19};

    int cnt = 0;

    for(int i = 0; i < 4; ++i){
        if(n % d[i] == 0){
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}