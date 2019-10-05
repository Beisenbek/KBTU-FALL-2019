#include <iostream>

using namespace std;

int main(){

    int a[3][3];

    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            a[i][j] = (i + 1) * (j + 1);
        }
    }

    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            a[i][j] *= 2; 
        }
    }

    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
           cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}