#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int color[101];
int a[101][101];
int n, m;
vector<int> ans;

bool dfs(int v){
    bool res = true;
    color[v] = 1;
    for(int i = 1; i <= n; ++i){
        if(a[v][i] == 1){
            if(color[i] == 0){
                if(dfs(i) == false){
                    break;
                }
            }
            else if(color[i] == 1){
                res = false;
                break;
            }
        }
    }
    cout << v << " " << res << endl;
    ans.push_back(v);
    color[v] = 2;
    return res;
}

int main(){

    cin >> n >> m;
    int x, y;

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

    bool res = true;
    for(int i = 1; i <= n; ++i){
        if(color[i] == 0 && dfs(i) == false){
            res = false;
            break;
        }
    }
    if(res == false){
        cout << "NO\n";
    }else{
        cout << "YES\n";
    }

    reverse(ans.begin(), ans.end());

    for(int i = 0; i < ans.size(); ++i){
        cout << ans[i] << " ";
    }

    return 0;
}