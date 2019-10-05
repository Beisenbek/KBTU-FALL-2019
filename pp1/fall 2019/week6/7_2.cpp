#include <iostream>

using namespace std;


int main(){
    int a[26];
    //memset(a, 0, sizeof(a));
    for(int i = 0; i < 26; ++i){
        a[i] = 0;
    }

    int n;
    cin >> n;
    char c;
    for(int i = 0; i < n; ++i){
        cin >> c;
        int x = int(c) - 'a';
        a[x] = a[x] + 1;
    }

    for(char i = 'a'; i <= 'z'; ++i){
        if(a[i-'a'] != 0){
            cout << i << " " << a[i-'a'] <<   endl;
        }
    }


    return 0;
}