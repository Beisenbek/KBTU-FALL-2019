#include <iostream>
#include <set>
#include <vector>

#define Q 18446744073709551615

using namespace std;

unsigned long long p_i[N];
unsigned long long h_i[N];

set<unsigned long long> ds;

void prepareP(){
    unsigned long long x;
    p_i[0] = 1;
    for(int i = 1; i < N; i++){
        p_i[i] = (p_i[i-1] * 31) % Q;
    }
}

void calculateHashForAllPrefix(string text){
    unsigned long long h_p = 0;
    int n = text.size();
    h_i[0] = (text[0] - 'a' + 1);
    for(int i = 1; i < n; ++i){
        unsigned long long k = (text[i] - 'a' + 1);
        h_i[i] = (k * p_i[i]) % Q;
        if(i > 0){
            h_i[i] += h_i[i-1];
        }
    }
}

unsigned long long calculateHash(string pattern){
    unsigned long long h_p = 0;
    int n = pattern.size();
    for(int i = 0; i < n; ++i){
        unsigned long long k = (pattern[i] - 'a' + 1);
        h_p = (h_p +  k * p_i[i]) % Q;
    }
    return h_p;
}

int main(){

    prepareP();

    string s;
    cin >> s;
    calculateHashForAllPrefix(s);

    int n;
    cin >> n;
    string str;
    bool ok = false;

    for(int i = 0; i < n; ++i){
        cin >> str;
        unsigned long long x = calculateHash(str);
        ds.insert(x);
    }

    for(int i = 0; i < s.size() - 1; ++i){
        unsigned long long sh = (h_i[s.size()-1] - h_i[i]) / p_i[i+1];
        unsigned long long ph = h_i[i];
        //cout << ph << " " << sh << endl;
        //cout << s.substr(0, i + 1) << " " << s.substr(i + 1) << endl;
        //cout << calculateHash(s.substr(0, i + 1)) << " " << calculateHash(s.substr(i + 1)) << endl;
        //cout << ph << " " << sh << endl;
        if(ds.find(ph) != ds.end() && ds.find(sh) != ds.end()){
            ok = true;
            break;
        }
    }

    if(ok){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}