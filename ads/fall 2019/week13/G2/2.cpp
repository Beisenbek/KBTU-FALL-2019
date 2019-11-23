#include <iostream>
#include <set>
#include <vector>
#define ull long 
#define Q 18446744073709551615 

using namespace std;

vector<ull> p_i, h_i;
set<ull> ds;

void prepareP(string text){
    ull x;
    ull n = text.size() + 100;
    p_i.push_back(1);
    for(ull i = 1; i < n; i++){
        ull l = (p_i[i-1] * 31) % Q;
        p_i.push_back(l);
    }
}

void calculateHashForAllPrefix(string text){
    ull n = text.size();
    h_i.push_back(text[0] - 'a' + 1);
    for(ull i = 1; i < n; ++i){
        ull k = (text[i] - 'a' + 1);
        h_i.push_back((k * p_i[i]) % Q);
        if(i > 0){
            h_i[i] += h_i[i-1];
        }
    }
}

ull calculateHash(string pattern, int ttt){
    ull h_p = 0;
    ull n = pattern.size();

    if(ttt == 46) {
        cout << "test" << endl;
        return 1;
    }

    for(ull i = 0; i < n; ++i){
        ull k = (pattern[i] - 'a' + 1);
        h_p = (h_p +  (k * p_i[i]) % Q) % Q;
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
        ull x = calculateHash(str, t);
        ds.insert(x);
    }

  

    ull k = s.size();
    for(ull i = 0; i < k - 1; ++i){
        ull sh = (h_i[k - 1] - h_i[i]) / p_i[i + 1];
        ull ph = h_i[i];
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