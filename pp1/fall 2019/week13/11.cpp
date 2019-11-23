#include <iostream>
#include <vector>

using namespace std;

void print(int cr, int cc, int r, int c, int x){
    cout << x;
    if(cr == r - 1 && cc == c - 1) return;
    if(cc == c - 1){
        cout << endl;
        print(cr + 1, 0, r, c, cr % 2);
    }else{
        print(cr, cc + 1, r, c, 1 - x);
    }
    
}

int main(){

    int r, c;
    cin >> r >> c;
    print(0, 0, r, c, 1);

    return 0;
}