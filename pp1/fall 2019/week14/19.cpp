#include <iostream>
#include <queue>

using namespace std;

int main(){

    int n, k, x;
    priority_queue<int> q;

    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> x;
        q.push(-x);
    }
    cin >> k;
    int cnt = 0;

    while(q.size() > 2 && q.top() >= -k){
        int l1 = q.top();
        q.pop();
        int l2 = q.top();
        q.pop();
        q.push(l1 + l2);
        cnt++;
    }

    if(q.top() < -k){
        cout << "YES" << endl;
        cout << cnt << endl;
    }else{
        cout << "NO" << endl;
    }


    return 0;
}
