#include <iostream>

using namespace std;

bool f(int x1, int y1, int x2, int y2, int x, int y){
    if(x <= x2 && x >= x1 && y >= y2 && y <= y1) return true;
    return false;
}

int main(){
    int x1;
    int y1;
    int x2;
    int y2;
    int x;
    int y;
    cin >> x1 >> y1 >> x2 >> y2 >> x >> y;

    if(f(x1, y1, x2, y2, x, y)){
        cout << "yes";
    }else{
        cout << "no";
    }

    return 0;
}