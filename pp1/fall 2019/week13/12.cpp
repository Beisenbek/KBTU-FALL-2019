#include <iostream>
#include <vector>

using namespace std;

string f(string s){
    string t = "";
    for(int i = 0; i < s.size(); ++i){
        if(t.find(s[i]) == string::npos){
            t += s[i];
        }
    }
    return t;
}

int main(){

    string s;
    cin >> s;
    cout << f(s) << endl;

    return 0;
}