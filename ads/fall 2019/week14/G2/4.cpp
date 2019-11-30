#include <iostream>
#include <queue>

using namespace std;

int a[101][101];
int n;
bool used[101];

int main(){

    cin >> n;

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            cin >> a[i][j];
        }
    }

    queue<int> q;
    q.push(1);
    used[1] = true;

    while(q.size() > 0){
        int cur = q.front();
        q.pop();
        cout << cur << " ";
        for(int i = 1; i <= n; ++i){
            if(a[cur][i] == 1 && !used[i]){
                q.push(i);
                used[i] = true;
            }
        }
    }

    return 0;
}