#include <iostream>
#include <set>

using namespace std;


int main(){

    int n, k, x;
    set<int, less<int> > s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);

    set<int>::iterator it;

    for(it = s.begin(); it != s.end(); ++it){
        cout << *it << " ";
    }

    return 0;
}
