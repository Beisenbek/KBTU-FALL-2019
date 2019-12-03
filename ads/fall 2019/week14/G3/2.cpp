#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int color[100];
int a[100][100];
int n;
vector<int> ans;

bool dfs(int v){
    bool res = true;
    color[v] = 1;
    for(int i = 0; i < n; ++i){
        if(a[v][i] == 1){
            if(color[i] == 0){
                if(dfs(i) == false){
                    res = false;
                    break;
                }
            }else if(color[i] == 1){
                res = false;
                break;
            }else if(color[i] == 2){
                
            }
        }
    }
    color[v] = 2;
    ans.push_back(v);
    return res;
}

int main(){

    cin >> n;

    for(int i = 0; i < n; ++i){
        color[i] = 0;
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }
    bool res = true;


    for(int i = 0; i < n; ++i){
       if(color[i] <= 1) dfs(i);
    }


     if(res == true){
        cout << "YES" << endl;
        reverse(ans.begin(), ans.end());
        for(int i = 0; i < ans.size(); ++i){
            cout << ans[i] << " ";
        }
    }else{
        cout << "NO";
    }


    return 0;
}