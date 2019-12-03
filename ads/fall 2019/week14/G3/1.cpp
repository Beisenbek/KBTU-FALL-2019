//comp
//topsort
//prima (mst)
//dijkstra
//floyd
#include <iostream>

using namespace std;

bool used[100];
int a[100][100];
int n;

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
        used[i] = false;
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }

    int cnt = 0;

    for(int i = 0; i < n; ++i){
        if(!used[i]){
            dfs(i);
            cnt++;
        }
    }

    cout << cnt << endl;



    return 0;
}