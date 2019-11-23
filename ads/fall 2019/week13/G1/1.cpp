#include <iostream>

using namespace std;

int n;

int a[100][100];
bool used[100];

void dfs(int v){
    used[v] = true;
    for(int i = 0; i < n; ++i){
        if(a[v][i] == 1 && !used[i]){
            dfs(i);
        }
    }
}


int main(){

    cin >> n;
    
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }

    int cnt = 0;

    for(int i = 0; i < n; ++i){
        if(!used[i]){
            cnt++;
            dfs(i);
        }
    }

    cout << cnt << endl;

    return 0;
}