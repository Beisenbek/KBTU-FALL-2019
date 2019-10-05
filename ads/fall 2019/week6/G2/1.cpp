#include <iostream>

using namespace std;

bool possible(long long t, long long a, long long b, long long c, long long n){
    return t / a + t / b + t / c >= n;
}


int main(){

    long long n;
    cin >> n;

    long long a, b, c;
    cin >> a >> b >> c;

    long long t = max(a * n, max(b *n, c * n));

    long long l = 0;
    long long r = t;

    while(l < r){
        long long p = (l + r) / 2;
        if(possible(p, a, b, c, n)){
            r = p;
        }else{
            l = p + 1;
        }
    }

    cout << l << endl;

    return 0;
}