#include <iostream>
#include <sstream>
#include <set>
#include <queue>

using namespace std;

string getId(int row, int column){
    stringstream ss;
    ss << row << "_" << column;
    return ss.str();
}

struct cell{
    public:
        int row;
        int column;
        int proceedTime;
        string id;

        cell(int r, int c, int pt){
            row = r;
            column = c;
            proceedTime = pt;
            id = getId(r, c);
        }
    
};

struct labirint{
    set<string> used;
    set<string> obstacle;
    queue<cell *> q;
    int row_count, column_count;

    labirint(int r, int c, int rc, int cc){
        enqueue(r, c, 0);
        row_count = rc;
        column_count = cc;
    }

    void enqueue(int r, int c, int t){
        q.push(new cell(r, c, 0));
        used.insert(getId(r,c));
    }

    void step(int r, int c, int t){
        string id = getId(r, c);
        if(r < 1 || c < 1) return;
        if(r < 1 || c < 1) return;
        if(r > row_count || c > column_count) return;
        if(obstacle.find(id) != obstacle.end()) return;
        if(used.find(id) != obstacle.end()) return;
        enqueue(r, c, t + 1);
    }

    void run(){
        while(q.size() > 0){
            cell * currentCell = q.front();
            q.pop();
            step(currentCell->row + 1, currentCell->column, currentCell->proceedTime);
            step(currentCell->row - 1, currentCell->column, currentCell->proceedTime);
            step(currentCell->row, currentCell->column + 1, currentCell->proceedTime);
            step(currentCell->row, currentCell->column - 1, currentCell->proceedTime);
        }
    }
};

int main(){


    int row_count, column_count, startX, startY;
    int targetX, targetY;

    cin >> row_count >> column_count;
    cin >> startX >> startY;
    cin >> targetX >> targetY;

    labirint l(startX, startY, row_count, column_count);

    int obstacle_count;
    int obstacleX;
    int obstacleY;

    for(int i = 0; i < obstacle_count; ++i){
        cin >> obstacleX >> obstacleY;
        l.obstacle.insert(getId(obstacleX, obstacleY));
    }

    l.run();

    string targetId = getId(targetX, targetY);

    if(l.used.find(targetId) == l.used.end()){
        cout << "impossible!";
    }else{
        cout << "ok!";
    }

    return 0;
}