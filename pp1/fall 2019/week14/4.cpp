#include <iostream>
#include <sstream>

using namespace std;

struct myPoint{
    int x;
    int y;
    int z;
    string name;
    void setData(int _x, int _y, int _z, string _name){
        x = _x;
        y = _y;
        z = _z;
        name = _name;
    }
    string getData(){
        stringstream ss;
        ss << x << " " << y << " " << z << " " << name;
        return ss.str();
    }
};

int main(){

    int n;
    cin >> n;
    myPoint p[n];
    int x, y, z;
    string name;

    for(int i = 0; i < n; ++i){
        cin >> x >> y >> z >> name;
        p[i].setData(x, y, z, name);
    }

    for(int i = 0; i < n; ++i){
        cout << p[i].getData() << endl;
    }

    return 0;
}