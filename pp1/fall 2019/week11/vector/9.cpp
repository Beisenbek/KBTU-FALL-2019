#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int x, y;
    cin >> x >> y;

    vector<int> v;
    v.push_back(41);
    v.push_back(1);
    v.push_back(11);
    v.push_back(10);

    vector<int> :: iterator it;
    vector<int> :: iterator pos = v.end() - 1;
    
    for(it = v.begin(); it != v.end(); it++){
        if(*it == x){
            pos = it;
            break;
        }
    }

    v.insert(pos + 1, y);
    
    for(it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }

    return 0;
}