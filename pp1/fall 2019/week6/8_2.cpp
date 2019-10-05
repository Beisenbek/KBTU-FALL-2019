#include <iostream>

using namespace std;

int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int x;
    int sum = 0;

    while(cin >> x){
        sum += x;
    }

    cout << sum << endl;

    return 0;
}