#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int a[101][101];
int color[101];
int n, m, x, y;
vector<int> ans;

bool dfs(int v){
    bool res = true;
    color[v] = 1;
    for(int i = 1; i <= n; ++i){
        if(a[v][i] == 1){
            if(color[i] == 0){
                if(dfs(i) == false){
                    res = false;
                    break;
                }
            }else if(color[i] == 1){
                res = false;
                break;
            }
        }
    }
    color[v] = 2;
    ans.push_back(v);
    return res;
}

int main(){

    cin >> n >> m;

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            a[i][j] = 0;
        }
        color[i] = 0;
    }

    for(int i = 0; i < m; ++i){
        cin >> x >> y;
        a[x][y] = 1;
    }

    if(dfs(1) == true){
        cout << "Yes";
    }else{
        cout << "No";
    }

    reverse(ans.begin(),ans.end());
    
    for(int i = 0; i < ans.size(); ++i){
        cout << ans[i] << " ";
    }

    return 0;
}