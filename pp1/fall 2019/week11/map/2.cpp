#include <iostream>
#include <map>

using namespace std;

int main(){

    freopen("input.txt","r", stdin);
    map<string, int> m;
    string str;
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> str;
        m[str] = str.size();
    }

    string q;
    cin >> q;

    cout << m[q] << endl;



    return 0;
}