#include <iostream>
#include <map>
#include <cmath>

using namespace std;

int main(){

    freopen("input2.txt","r", stdin);
    map<string, int> m;
    string str;
    int n;

    while(cin >> str >> n){
        if(n < 0){
            if(m.find(str) != m.end()){
                if(m[str] >= abs(n)){
                    m[str] += n;
                }else{
                     cout << str <<": not enough!" << endl;
                }
            }else{
                cout << str << ": not found!" << endl;
            } 
        }else{
            m[str] += n;
        }
    }
   
    map<string, int> :: iterator it;

    for(it = m.begin(); it != m.end(); ++it){
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}