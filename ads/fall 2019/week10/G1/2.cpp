#include <iostream>
#include <vector>

using namespace std;

vector<int> pi;

int p2(string t){
    int m = t.size();
    int len = 0;
    for(int i =  t.size() - 1; i >= 0; --i){
        string preff =  t.substr(0, i);
        string suff = t.substr(m - i, i);
        if(preff == suff){
            len = i;
            break;
        }
    }
    return len;
}

void p(string s){
    int n = s.size();
    for(int k = 1; k <= s.size(); ++k){
        string t = s.substr(0, k);
        pi.push_back(p2(t));
    }
}

int main(){
    string s = "hello";
    string t = "hihelllo!";

    p(s + '#' + t);

    for(int i = 0; i < pi.size(); ++i){
        cout << pi[i] << " ";
    }

    return 0;
}