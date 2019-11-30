#include <iostream>

using namespace std;

struct myPoint{
    int x;
    int y;
    int z;
    string name;
    void readData(){
        cin >> x >> y >> z >> name;
    }
    void printData(){
        cout << x << " " << y << " " << z << " " << name << endl;
    }
};

int main(){

    int n;
    cin >> n;
    myPoint p[n];

    for(int i = 0; i < n; ++i){
        p[i].readData();
    }

    for(int i = 0; i < n; ++i){
        p[i].printData();
    }

    return 0;
}