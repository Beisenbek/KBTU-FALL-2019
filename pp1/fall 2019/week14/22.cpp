#include <iostream>
#include <set>

using namespace std;

struct lex_compare {
    bool operator() (int x, int y) const {
        if(x > y) return false;
        return true;
    }
};

int main(){

    int n, k, x;
    set<int, lex_compare> s;

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
