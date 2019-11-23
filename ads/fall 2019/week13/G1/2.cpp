#include <iostream>
#include <queue>

using namespace std;

int n;

int a[100][100];
bool used[100];
queue<int> q;


int main(){

    cin >> n;
    
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }
    
    used[0] = true;
    q.push(0);
    

    while(q.size() != 0){
        int cur = q.front();
        q.pop();
        cout << cur + 1 << " ";
        for(int i = 0; i < n; ++i){
            if(a[cur][i] == 1 && !used[i]){
                used[i] = true;
                q.push(i);
            }
        }
    }

    return 0;
}