#include <iostream>
#include <cmath>

using namespace std;

bool isDigit(char c){
    return c <= '9' && c >= '0';
}

int f1(string s){
    int cnt = 0;
    for(size_t i = 0; i < s.size(); ++i){
        if(isDigit(s[i])) cnt++;
    }
    return cnt;
}

bool f(string s, int n){
    return f1(s) >= n;
}

int main(){

    string s;
    int n;
    cin >> s >> n;
    
    if(f(s, n) == true){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}