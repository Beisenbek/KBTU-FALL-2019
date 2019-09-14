#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];

    /*cin >> a[0];
    cin >> a[1];
    cin >> a[2];
    cin >> a[3];
    ...
    cin >> a[n-1];
    */

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        cout << a[i];
        if(i != n - 1){
            cout << ",";
        }
    }

    return 0;
}