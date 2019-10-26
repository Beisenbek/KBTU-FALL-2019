#include <iostream>

using namespace std;

int find(string text, string pattern){
    int n = text.size();
    int m = pattern.size();
    int res = -1;

    for(int i = 0; i <= n - m; ++i){
        bool ok = true;
        for(int j = 0; j < m; ++j){
            if(text[i+j] != pattern[j]){
                ok = false;
                break;
            }
        }
        if(ok){
            res = i;
            break;
        }
    }

    return res;
}

int main(){

    string t, p;
    cin >> t >> p;

    cout << find(t, p);


    return 0;
}