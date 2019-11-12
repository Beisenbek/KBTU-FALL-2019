#include <iostream>

using namespace std;


int f2(string t){
    int res = 0;
    for(int i = t.size() - 1; i > 0; --i){
        string prefix = t.substr(0, i);
        string suffix = t.substr(t.size()- i, i);
        if(suffix == prefix){
            res = prefix.size();
            break;
        }
    }
    return res;
}

void f(string s){
    int p[s.size()];

    for(int i = 0; i < s.size(); ++i){
        string t = s.substr(0, i + 1);
        p[i] = f2(t);
        cout << p[i] << " ";
    }
    
}

int main(){

    string s = "abab";

    f(s);

    return 0;
}