#include <iostream>
#include <vector>

using namespace std;


vector<int> pi;

int p2(string t){
    int len = 0;
    for(int i = t.size() - 1; i >= 0; --i){
        string suf = t.substr(t.size() - i, i);
        string pref = t.substr(0, i); 
        if(pref == suf){
            len = i;
            break;
        }
    }
    return len;
}

void p(string s){
    for(int i = 1; i <= s.size(); ++i){
        pi.push_back(p2(s.substr(0, i)));
    }
}


int main(){

    string text = "hellohi!helhi!lo";
    string pattern = "hi!";

    p(pattern + "#" + text);

    for(int i = 0; i < pi.size(); ++i){
        cout << pi[i] << " ";
    }

    return 0;
}

/*
  "hi!"#"hellohi!hello";
   ;
*/