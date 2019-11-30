#include <iostream>
#include <sstream>

using namespace std;

class myPoint{
    public:
        int x;
        int y;
        myPoint(int x, int y): x(x), y(y){
            stringstream ss;
            ss << x << "_" << y;
            id = ss.str();
        }
        string getId(){
            return id;
        }
    private:
        string id;
};

int main(){

    myPoint * p1 = new myPoint(3, 2);
    myPoint p2(1, 2);

    cout << p1->getId() << endl;
    cout << p2.getId();
    cout << p2.id << endl;

    return 0;
}