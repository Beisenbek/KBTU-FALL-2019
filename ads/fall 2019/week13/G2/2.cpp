#include <iostream>
#include <set>
#define Q 100007
#define MS 1000001

using namespace std;

int p_i[MS], h_i[MS];
set<int> ds;

void prepareP(string text){
    int n = text.size();
    p_i[0] = 1;
    for(int i = 1; i < n; i++){
        int l = (p_i[i-1] * 31) % Q;
        p_i[i] = l;
    }
}

void calculateHashForAllPrefix(string text){
    int n = text.size();
    h_i[0] = (text[0] - 'a' + 1);
    for(int i = 1; i < n; ++i){
        int k = (text[i] - 'a' + 1);
        h_i[i] = (k * p_i[i]) % Q;
        if(i > 0){
            h_i[i] = (h_i[i] + h_i[i-1])% Q;
        }
    }
}

int calculateHash(string pattern){
    int h_p = 0;
    int n = pattern.size();

    for(int i = 0; i < n; ++i){
        int k = (pattern[i] - 'a' + 1);
        h_p = (h_p +  (k * p_i[i]) % Q) % Q;
    }

    return h_p;
}

int main(){
    string s;
    cin >> s;

    int t;
    cin >> t;

    prepareP(s);

    calculateHashForAllPrefix(s);

    string str;
    bool ok = false;

    for(int i = 0; i < t; ++i){
        cin >> str;
        int x = calculateHash(str);
        ds.insert(x);
    }
  
    int k = s.size();
    for(int i = 0; i < k - 1; ++i){
        if(ds.find(h_i[i]) != ds.end()){
            string q = s.substr(i + 1);
            int qh = calculateHash(q);
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