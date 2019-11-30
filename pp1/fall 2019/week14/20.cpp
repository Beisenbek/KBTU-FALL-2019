#include <iostream>
#include <queue>

using namespace std;

struct lex_compare {
    bool operator() (int x, int y) const {
        if(x > y) return false;
        return true;
    }
};

int main(){

    int n, k, x;
    priority_queue<int, vector<int>, lex_compare> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    while(!q.empty()){
        cout << q.top() << endl;
        q.pop();
    }

    return 0;
}
