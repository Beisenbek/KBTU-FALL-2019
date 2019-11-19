#include <iostream>

using namespace std;

int find(string text, string pattern){
    int index = -1;

    int n = text.size();
    int m = pattern.size();
    unsigned long long q =  18446744073709551615;

    long long p_i[n];
    p_i[0] = 1;
    
    for(int i = 1; i < n; i++){
        p_i[i] = (p_i[i-1] * 31) % q;
    }

    long long h[n];
    h[0] = (text[0] - 'a' + 1);

    for(int i = 1; i < n; ++i){
        long long k = (text[i] - 'a' + 1);
        h[i] = (h[i - 1] +  k * p_i[i]) % q;
    }

    long long h_p = 0;
    for(int i = 0; i < m; ++i){
        long long k = (pattern[i] - 'a' + 1);
        h_p = (h_p +  k * p_i[i]) % q;
    }

    bool res = false;

    for(int i = 0; i <= n - m; ++i){
        long long cur_h = h[i + m - 1];
        if(i != 0){
            cur_h -= h[i-1];
        }
        long long k = (h_p * p_i[i]) % q;

        if(cur_h == k){
            index = i;
            res = true;
            break;
        }
    }

    return index;
}

int main(){

    string a;
    string b;

    cin >> a >> b;
    
    int x = find(b + b , a);

    cout << x << endl;


    return 0;
}