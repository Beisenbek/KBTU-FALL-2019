#include <iostream>
#include <vector>

using namespace std;

vector<int> f(string s){
    vector<int> p(s.size());
    p[0] = 0;

    for(int i = 1; i < s.size(); ++i){
        int j = p[i-1];
        while(j > 0 && s[i] != s[j]){
            j = p[j-1];
        }

        if(s[i] == s[j]){
            j++;
        }

        p[i] = j;
    }

    return p;
}

int main(){

    string s = "abab";
    vector<int> p = f(s);
    for(int i = 0; i < p.size(); ++i){
        cout << p[i] << " ";
    }

    return 0;
}