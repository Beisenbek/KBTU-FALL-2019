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

    for(int i = 0; i < 26; ++i){
        if(a[i] != 0){
            cout << char(i + 'a') << " " << a[i] <<   endl;
        }
    }


    return 0;
}