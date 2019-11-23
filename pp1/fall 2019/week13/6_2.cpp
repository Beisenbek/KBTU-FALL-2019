#include <iostream>

using namespace std;

bool isPalindrome(string s){
    if(s.size() <= 1) return true;
    if(s[0] != s[s.size()-1]) return false;
    return isPalindrome(s.substr(1,s.size() - 2));
}

int main(){ 

    int q;
    cin >> q;
    string s;

    for(int i = 0; i < q; ++i){
        cin >> s;
        if(isPalindrome(s)){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }


    return 0;
}