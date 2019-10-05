#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue<int> t;

    int q, k, h, d;
    int level = 0;
    cin >> q;

    for(int i = 0; i < q; ++i){
        cin >> k;
        if(k == 1){
            cin >> h;
            t.push(h);
        }else if(k == 2){
            cin >> d;
            level += d;
        }else if(k == 3){
            while(!t.empty() && t.front() <= level){
                t.pop();
            }
            if(t.empty()) cout << -1 << endl;
            else cout << t.front() << endl;
        }
    }

    return 0;
}