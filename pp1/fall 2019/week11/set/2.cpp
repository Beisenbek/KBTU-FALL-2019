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

    int x;
    cin >> x;
    set<int>::iterator res = s.find(x);

    if(res == s.end()){
        cout << "not found!";
    }else{
        cout << "found!";
    }

    return 0;
}