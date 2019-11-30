#include <iostream>

using namespace std;

struct myPoint{
    int x;
    int y;
    int z;
    string name;
};

int main(){

    int n;
    cin >> n;
    myPoint p[n];

    for(int i = 0; i < n; ++i){
        cin >> p[i].x >> p[i].y >> p[i].z >> p[i].name;
    }

    for(int i = 0; i < n; ++i){
        cout <<  p[i].x << " " << p[i].y << " " << p[i].z << " " << p[i].name << endl;
    }

    return 0;
}