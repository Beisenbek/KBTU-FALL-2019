#include <iostream>

using namespace std;

int find(string text, string pattern){
    int res = -1;
    int n = text.size();
    int m = pattern.size();
    long long pp[n + 1];
    long long hh[n];
    pp[0] = 1;
    
    for(int i = 1; i <= n; ++i){
        pp[i] = pp[i - 1] * 31;
    }

    hh[0] = pp[0] * (text[0] - 'a' + 1);
    for(int i = 1; i < n; ++i){
        hh[i] = hh[i-1] + pp[i] * (text[i] - 'a' + 1);
    }

    long long pattern_hash = 0;
    for(int i = 0; i < m; ++i){
        pattern_hash += pp[i] * (pattern[i] - 'a' + 1);
    }

    for(int i = 0; i <= n - m; ++i){
        long long z = hh[i + m - 1];
        if(i != 0){
            z -= hh[i-1];
        }
        if(pattern_hash * pp[i] == z){
            res =  i;
            break;
        }
    }

    return res;
}

int main(){

    string t, p;
    cin >> t >> p;

    cout << find(t, p);

    return 0;
}