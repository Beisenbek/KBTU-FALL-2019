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

    map<string, int> :: iterator it;

    for(it = m.begin(); it != m.end(); ++it){
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}