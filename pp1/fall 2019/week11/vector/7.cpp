#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<int> v;
    v.push_back(41);
    v.push_back(1);
    v.push_back(11);
    v.push_back(10);

    sort(v.begin() + 1, v.end());

    vector<int> :: iterator it;
    
    for(it = v.begin(); it != v.end(); it++){
        cout << *it << endl;
    }

    return 0;
}