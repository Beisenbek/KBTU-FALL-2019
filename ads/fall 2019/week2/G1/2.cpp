#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<char> st;

    string str;
    cin >> str;
    bool ok = true;
    
    for(int i = 0; i < str.size(); ++i){
        if(str[i] == '('){
            st.push('(');
        }else  if(str[i] == ')'){
            if(st.size() > 0){
                st.pop();
            }else{
                ok = false;
                break;
            }
        }
    }

    if(st.size() != 0){
        ok = false;
    }

    if(!ok){
        cout << "no";
    }else{
        cout << "ok";
    }

    return 0;
}