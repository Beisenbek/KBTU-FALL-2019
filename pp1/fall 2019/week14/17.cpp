#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue<int> q;

    q.push(11);
    q.push(12);
    q.push(1);
    q.push(14);

    cout << q.front() << endl;
    cout << q.back() << endl;


    return 0;
}
