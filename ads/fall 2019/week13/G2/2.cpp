#include <iostream>
#include <set>
#define ull unsigned long 
#define Q 100007
#define MS 1000001           

using namespace std;

ull p_i[MS], h_i[MS];
set<ull> ds;

void prepareP(string text){
    ull x;
    ull n = text.size();
    p_i[0] = 1;
    for(ull i = 1; i < n; i++){
        ull l = (p_i[i-1] * 31) % Q;
        p_i[i] = l;
    }
}

void calculateHashForAllPrefix(string text){
    ull n = text.size();
    h_i[0] = (text[0] - 'a' + 1);
    for(ull i = 1; i < n; ++i){
        ull k = (text[i] - 'a' + 1);
        h_i[i] = k * p_i[i] % Q;
        if(i > 0){
            h_i[i] = (h_i[i] + h_i[i-1])% Q;
        }
    }
}

ull calculateHash(string pattern){
    ull h_p = 0;
    ull n = pattern.size();

    for(ull i = 0; i < n; ++i){
        ull k = (pattern[i] - 'a' + 1);
        h_p = (h_p +  k * p_i[i] % Q) % Q;
    }

    return h_p;
}

int main(){
    string s;
    cin >> s;

    ull t;
    cin >> t;

    prepareP(s);

    calculateHashForAllPrefix(s);

    string str;
    bool ok = false;

    for(ull i = 0; i < t; ++i){
        cin >> str;
        ull x = calculateHash(str);
        ds.insert(x);
    }
  
    ull k = s.size();
    for(ull i = 0; i < k - 1; ++i){
        if(ds.find(h_i[i]) != ds.end()){
            string q = s.substr(i + 1);
            ull qh = calculateHash(q);
            if(ds.find(qh) != ds.end()){
                ok = true;
                break;
            }
        }
    }

    if(ok){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}