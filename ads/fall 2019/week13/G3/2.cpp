#include <iostream>
#include <set>

using namespace std;

int main(){

    string s;
    cin >> s;

    int n;
    cin >> n;
    set<string> dictionary;
    string word;

    for(int i = 0; i < n; ++i){
        cin >> word;
        dictionary.insert(word);
    }

    bool found = false;

    for(int i = 1; i < s.size() - 1; ++i){
        string preffix = s.substr(0, i);
        string suffix  = s.substr(i + 1);
        if(dictionary.find(preffix) != dictionary.end()){
            if(dictionary.find(suffix) != dictionary.end()){
                found = true;
                break;
            }
        }
    }

    if(found){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}