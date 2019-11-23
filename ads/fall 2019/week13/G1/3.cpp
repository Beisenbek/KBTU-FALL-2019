#include <iostream>
#include <queue>
#include <algorithm>
#include <stdio.h>

using namespace std;

struct cell{
    int row;
    int col;
    int cnt;
    cell(int r, int c, int k){
        row = r;
        col = c;
        cnt = k;
    }
};

int n;

bool used[8][8];
queue<cell> q;


int main(){

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    a--;
    b--;
    c--;
    d--;
    
    for(int i = 0; i < 8; ++i){
        for(int j = 0; j < 8; ++j){
            used[i][j] = false;
        }
    }

    used[a][b] = true;
    q.push(cell(a, b, 0));

    int dr[] = {-1, -2, -2, -1, 1, 2, 2, 1};
    int dc[] = {-2, -1,  1,  2, 2, 1,-1,-2};

    while(q.size() != 0){
        cell cur = q.front();
        q.pop();

        //cout << cur.row + 1 << " " << cur.col + 1 << endl;

        if(cur.row == c && cur.col == d){
            cout << cur.cnt << endl;
            break;
        }

        for(int i = 0; i < 8; ++i){
            int r = cur.row + dr[i];
            int c = cur.col + dc[i];
            if(r < 8 && c < 8 && c >= 0 && r >= 0){
                if(!used[r][c]){
                    used[r][c] = true;
                    q.push(cell(r,c, cur.cnt + 1));
                }
            }
        }
    }

    return 0;
}