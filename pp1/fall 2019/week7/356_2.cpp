#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    int sum = -1;
    int index = -1;
    int x;

    for(int i = 0; i < n; ++i){
        int s = 0;
        for(int j = 0; j < m; ++j){
            cin >> x;
            s += x;
        }
        if(s > sum){
            sum = s;
            index = i;
        }
    }

    cout << sum << endl << index << endl;

    return 0;
}