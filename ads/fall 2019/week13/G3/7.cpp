#include <iostream>
#include <queue>

using namespace std;

int used[8][8];

int main(){

    for(int i = 0; i < 8; ++i){
        for(int j = 0; j < 8; ++j){
            used[i][j] = -1;
        }
    }

    int dx[] = {1,  2, 2, 1, -1, -2, -2, -1};
    int dy[] = {2, -1, 1, 2,  2,  1, -1, -2};

    int x, y, x1, y1;
    cin >> x >> y >> x1 >> y1;
    x--;
    y--;
    x1--;
    y1--;

    queue<pair<int, int> > q;
    q.push(make_pair(x, y));
    used[x][y] = 0;
    int cnt = 0;

    bool found = false;

    while(q.size() != 0){
        pair<int, int> cur = q.front();
        q.pop();
        for(int i = 0; i < 8; ++i){
            int x2 = cur.first  + dx[i];
            int y2 = cur.second + dy[i];
            if(x2 < 8 && y2 < 8 && x2 >= 0 && y2 >= 0 && used[x2][y2] == -1){
                used[x2][y2] = used[cur.first][cur.second] + 1;
                if(x2 == x1 && y2 == y1){
                    found = true;
                   break;
                }
                q.push(make_pair(x2, y2));
            }
        }
        if(found){
            break;
        }
    }

    cout << used[x1][y1];

    return 0;
}