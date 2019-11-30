#include <iostream>
#include <queue>

using namespace std;

int used[9][9];
queue<pair<int, int> > q;

int main(){
    int x,y;
    int x2,y2;
    cin >> x >> y >> x2 >> y2;
    int dx[] = {-2, -1,  1,  2, 2, 1, -1, -2};
    int dy[] = {-1, -2, -2, -1, 1, 2,  2,  1};

    for(int i = 1; i <= 8; ++i){
        for(int j = 1; j <= 8; ++j){
            used[i][j] = -1;
        }
    }

    q.push(make_pair(x, y));
    used[x][y] = 0;

    while(q.size() > 0){
        pair<int, int> cur = q.front();
        q.pop();
        
        if(cur.first == x2 && cur.second == y2){
            break;
        }

        for(int i = 0; i < 8; ++i){
            int x3 = cur.first + dx[i];
            int y3 = cur.second + dy[i];
            if(x3 >=1 && x3 <= 8 && y3 >= 1 && y3 <= 8){
                if(used[x3][y3] == -1){
                    q.push(make_pair(x3, y3));
                    used[x3][y3] = used[cur.first][cur.second] + 1;
                }
            }
        }
    }

    cout << used[x2][y2] << endl;

    return 0;
}