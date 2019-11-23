#include <iostream>
#include <set>

using namespace std;


int main(){

    string s;
    cin >> s;
    int n;
    cin >> n;
    string str;

    set<string> st;

    for(int i = 0; i < n; ++i){
        cin >> str;
        st.insert(str);
    }

    bool ok = false;

    for(int i = 1; i <= s.size() - 1; ++i){
        string s1 = s.substr(0, i);
        string s2 = s.substr(i);
        if(st.find(s1) != st.end() && st.find(s2) != st.end()){
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