#include <iostream>
#include <map>
#include <cmath>
#include <vector>

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
    vector<int> v;

    for(int i = 0; i < n; ++i){
        cin >> x;
        m[x] = dividerCount(x);
        v.push_back(x);
    }

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " " << m[v[i]] << endl;
    }


    return 0;
}