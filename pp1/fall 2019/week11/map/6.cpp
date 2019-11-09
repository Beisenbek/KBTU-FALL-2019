#include <iostream>
#include <map>
#include <cmath>

using namespace std;

int dividerCount(int x){
    int res = 0;
    for(int i = 1; i <= x; ++i){
        if(x % i == 0){
            res++;
        }
    }
    return res;
}

int main(){

    int n;
    cin >> n;
    int x;
    map<int, int> m;

    for(int i = 0; i < n; ++i){
        cin >> x;
        m[x] = dividerCount(x);
    }

    map<int, int> :: iterator it;

    for(it = m.begin(); it != m.end(); ++it){
        cout << it->first << " " << it->second << endl;
    }


    return 0;
}