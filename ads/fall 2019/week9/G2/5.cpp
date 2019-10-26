#include <iostream>
#include <cmath>    

using namespace std;

int find(string text, string pattern){
    int n = text.size();
    int m = pattern.size();
    int res = -1;
    for(int i = 0; i <= n - m; ++i){
        bool found = true;
        for(int j = 0; j < m; ++j){
            if(text[i + j] != pattern[j]){
                found = false;
                break;
            }
        }
        if(found){
            res = i;
            break;
        }
    }
    return res;
}

int main(){

    string t, p;
    cin >> t >> p;

    cout << find(t, p) << endl;

    return 0;
}