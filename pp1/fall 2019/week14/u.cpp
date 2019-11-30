#include <iostream>

using namespace std;

bool f(int roomA, int roomB, int linA, int linB, int l){
    if(l > 2) return false;
    else if(roomA <= linA && roomB <= linB) return true;
    else if(roomB <= linA && roomA <= linB) return true;
    else if(roomA <= linA && roomB > linB) return f(0, roomB - linB, linA - roomA, 0, l + 1); 
    else if(roomB <= linA && roomA > linB) return f(roomA - linB, 0, linA - roomB, 0, l + 1);
}

bool f2(int roomA, int roomB, int linA, int linB){
    bool cond1 = max(roomA, roomB) <= max(linA, linB);
    bool cond2 = min(roomA, roomB) <= min(linA, linB);
    return (cond1 && cond2) || cond3;
}

bool f3(int roomA, int roomB, int linA, int linB){
    if(roomA <= linA && roomB <= linB) return true;
    if(roomA <= linB && roomB <= linA) return true;
    return false;
}

int main(){

    int a,b, x, y;
    cin >> a >> b >> x >> y;

    if(f(a, b, x, y, 0) == true){
        cout << "Thanks, Nurbek";
    }else{
        cout << "Impossible";
    }

    return 0;
}