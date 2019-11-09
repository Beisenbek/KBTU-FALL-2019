#include <iostream>
#include <set>

using namespace std;

int main(){

    set<int> s;

    int arr[] = {1, 12, 0, 10, 5, 5, 12};
    int n = sizeof(arr) / sizeof(int);

    for(int i = 0; i < n; ++i){
        s.insert(arr[i]);
    }

    set<int> :: iterator it;

    cout << *s.rbegin() << endl; //max
    cout << *s.begin() << endl; //min

    for(it = s.begin(); it != s.end(); ++it){
        cout << *it << " ";
    }

    return 0;
}