#include <iostream>
#include <queue>

using namespace std;

int a[10][10];
int used[10];
int n;

int main(){

    cin >> n;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }

    queue<int> q;
    q.push(0);
    used[0] = true;

    while(q.size() != 0){
        int cur = q.front();
        cout << cur << " ";
        q.pop();
        for(int i = 0; i < n; ++i){
            if(a[cur][i] == 1 && !used[i]){
                used[i] = true;
                q.push(i);
            }
        }
    }


    return 0;
}