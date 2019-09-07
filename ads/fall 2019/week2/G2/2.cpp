#include <iostream>
#include <stack>

using namespace std;

int main(){

    string s;
    cin >> s;

    stack<char> st;
    bool ok = true;

    for(int i = 0; i < s.size(); ++i){
        if(s[i] == '('){
            st.push(s[i]);
        }else if(s[i] == ')'){
            if(st.size() > 0){
                st.pop();
            }else{
                ok = false;
                break;
            }
        }
    }

    if(st.size() > 0 || ok == false){
        cout << "no";
    }else{
        cout << "ok";
    }


    return 0;
}