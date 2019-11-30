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

    myPoint p2;
    p1.x = 101;
    p1.y = 220;
    p1.z = 501;
    p1.name = "B";


    return 0;
}