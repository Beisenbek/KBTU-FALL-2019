#include <iostream>
#include <queue>

using namespace std;

int main(){

    priority_queue<int> q;

    q.push(110);
    q.push(12);
    q.push(12);
    q.push(1);
    q.push(14);

    while(!q.empty()){
        cout << q.top() << endl;
        q.pop();
    }


    return 0;
}
