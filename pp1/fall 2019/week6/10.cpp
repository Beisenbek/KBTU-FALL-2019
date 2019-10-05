#include <iostream>

using namespace std;

int main(){

    int a[9];
    int index = 0;

    for(int i = 1; i <= 3; ++i){
        for(int j = 1; j <= 3; ++j){
            a[index] = i * j;
            index++;
        }
    }

    for(int i = 0; i < 9; ++i){
        a[i] *= 2;
    }

    for(int i = 0; i < 9; ++i){
        cout << a[i] << "\t";
        if((i + 1) % 3 == 0) cout << endl;
    }

    return 0;
}