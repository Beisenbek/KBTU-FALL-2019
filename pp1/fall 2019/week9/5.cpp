#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main () {

    int n, m = 0, x, s = 0;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> x;
        m = max(m, x);
        s += x;
    }

    if(s - m > m){
        cout << "Yes";
    }else{
        cout << "No";
    }

    return 0;
}