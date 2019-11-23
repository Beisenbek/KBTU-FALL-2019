#include <iostream>

using namespace std;

bool rule1(string s, int a, int b){
    return s.size() == a + b + 1;
}

bool rule2(string s, int a, int b){
    return s[a] == '-';
}

bool rule3(string s, int a, int b){
    bool res = true;
    for(int i = 0; i < s.size(); ++i){
        if(i == a) continue;
        if(s[i] > '9' || s[i] < '0'){
            res = false;
            break;
        }
    }
    return res;
}

bool valid(string s, int a, int b){
    return rule1(s, a, b) && rule2(s, a, b) && rule3(s, a, b);
}

int main(){

    int a, b;
    cin >> a >> b;

    string text;
    cin >> text;

    if(valid(text, a, b)){
        cout << "Yes";
    }else{
        cout << "No";
    }

    return 0;
}