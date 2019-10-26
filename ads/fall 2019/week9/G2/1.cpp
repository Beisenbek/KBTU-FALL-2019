#include <iostream>
#include <cmath>    

using namespace std;

bool possible(float k, int h, int * a, int n){
    int s = 0;
    for(int i = 0; i < n; ++i){
        s += ceil(a[i] / k);
    }
    //cout << "k: " << k << "; s: " << s << endl;
    return s <= h;
}

int main(){

    int n, h;
    cin >> n >> h;
    int a[n];

    int l = 0;
    int r = -1;

    for(int i = 0; i < n; ++i){
        cin >> a[i];
        r = max(a[i], r);
    }

    while(l < r){
        int p = (l + r) / 2;
        if(possible(p, h, a, n)){
            r = p;
        }else{
            l = p + 1;
        }
    }

    if(l == r){
        cout << l << endl;
    }

    return 0;
}