#include <iostream>

using namespace std;

struct myPoint{
    int x;
    int y;
    myPoint(int x, int y){
        this->x = x;
        this->y = y;
    }
};

int main(){

    myPoint * p1 = new myPoint(1, 2);
    myPoint p2(1, 2);

    cout << p1->x << " " << p1->y << endl;
    cout << p2.x << " " << p2.y << endl;


    return 0;
}