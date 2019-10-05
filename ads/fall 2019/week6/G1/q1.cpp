#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack<char> st;
    string str;
    cin >> str;

    for(int i = 0; i < str.size(); ++i){
        if(st.empty()){
            st.push(str[i]);
        }else if(st.top() != str[i]){
            st.push(str[i]);
        }else if(st.top() == str[i]){
            st.pop();
        }
    }

    if(st.empty()){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}