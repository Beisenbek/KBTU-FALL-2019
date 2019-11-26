#include <iostream>

using namespace std;

int main(){

    string s;
    cin >> s;

    int n;
    cin >> n;
    string dictionary[n];

    for(int i = 0; i < n; ++i){
        cin >> dictionary[i];
    }

    bool preffixFound = false;
    bool suffixFound = false;

    for(int i = 1; i < s.size() - 1; ++i){
        string preffix = s.substr(0, i);
        string suffix  = s.substr(i);
        
        for(int j = 0; j < n; ++j){
            if(dictionary[j] == preffix){
                preffixFound = true;
            } 
            if(dictionary[j] == suffix){
                suffixFound = true;
            } 
            if(suffixFound && preffixFound){
                break;
            }
        }
        if(suffixFound && preffixFound){
                break;
        }
    }

    if(suffixFound && preffixFound){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}