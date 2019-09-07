#include <iostream>
#include <queue>
#include <map>
#include <sstream>

using namespace std;

struct Room{
    public:
        int x;
        int y;
        string id;
        int vtime;
        Room(int _x, int _y, int t){
            x = _x;
            y = _y;
            id = getId();
            vtime = t;
        }
    private:
        string getId(){
            stringstream ss;
            ss << x << "_" << y;
            return ss.str();
        }
};

struct VirusFlow{
    int n,m;
    queue<Room *> q;
    map<string, bool> used;
    int mvtime;

    string getId(int x, int y){
        stringstream ss;
        ss << x << "_" << y;
        return ss.str();
    }

    VirusFlow(int _n, int _m, int x, int y){
        n = _n;
        m = _m;
        mvtime = -1;
        Enqueue(x, y, 0);
    }

    void Enqueue(int x, int y, int t){
        Room * r = new Room(x, y, t);
        q.push(r);
        used[r->id] = true;
        mvtime = max(mvtime, t);
    }

    bool Check(int x, int y){
        if(x < 1 || y < 1 || x > n || y > m) return false;
        if(used[getId(x,y)] == true) return false;
        return true;
    }

    bool Step(int x, int y, int t){
        if(!Check(x,y)) return false;
        Enqueue(x, y, t);
    }

    void Run(){
        while(q.size() > 0){
            Room * currentRoom = q.front();
            q.pop();
            Step(currentRoom->x + 1, currentRoom->y, currentRoom->vtime + 1);                    
            Step(currentRoom->x - 1, currentRoom->y, currentRoom->vtime + 1);                    
            Step(currentRoom->x, currentRoom->y + 1, currentRoom->vtime + 1);                    
            Step(currentRoom->x, currentRoom->y - 1, currentRoom->vtime + 1);                    
        }
    }
};


int main(){

    int n,m,x,y;
    cin >> n >> m >> x >> y;

    VirusFlow flow(n, m, x, y);
    flow.Run();
    
    cout << flow.mvtime << endl;

    return 0;
}