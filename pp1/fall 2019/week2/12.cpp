#include <iostream>

using namespace std;

int main(){

    for(int i = 0; ; i = i + 2){
        if(i > 100) break;
        cout << i << " ";
    }

    return 0;
}