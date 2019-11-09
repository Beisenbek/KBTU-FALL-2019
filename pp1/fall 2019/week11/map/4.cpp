#include <iostream>
#include <map>

using namespace std;

int main(){

    freopen("input2.txt","r", stdin);
    map<string, int> m;
    string str;
    int n;

    while(cin >> str >> n){
        m[str] += n;
    } 
   
    map<string, int> :: iterator it;

    for(it = m.begin(); it != m.end(); ++it){
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}