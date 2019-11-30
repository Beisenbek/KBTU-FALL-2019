#include <iostream>

using namespace std;

struct myPoint{
    int x;
    int y;
    int z;
    string name;
};

int main(){

    myPoint p1;
    p1.x = 100;
    p1.y = 200;
    p1.z = 50;
    p1.name = "A";

    myPoint * p2 = new myPoint();
    p2->x = 10;
    p2->y = 10;
    p2->z = 10;
    p2->name = "B";

    cout << "ok" << endl;


    return 0;
}