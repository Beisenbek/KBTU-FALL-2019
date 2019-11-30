#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.pop();
    cout << st.top() << endl;

    return 0;
}
