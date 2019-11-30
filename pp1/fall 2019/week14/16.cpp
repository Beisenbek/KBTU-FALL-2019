#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack<char> st;

    string str;
    cin >> str;

    bool res = true;

    for(int i = 0; i < str.size(); ++i){
        if(str[i] == '}'){
            if(st.size() > 0){
                st.pop();
            }else{
                res = false;
                break;
            }
        }else{
            st.push('{');
        }
    }

    if(st.size() > 0 || res == false){
        cout << "NO";
    }else{
        cout << "YES";
    }




    return 0;
}
