#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    int a[n];

    for (int i=0; i<n; i++){
        cin >> a[i];
    }

    int m = a[0];

    for (int i = 1; i < n; i++){
        if (a[i] < m) {
            m = a[i];
        }
    }

    cout << m << " ";

    for (int i = 0; i < n; i++){
        if (a[i] > m){
            m = a[i];
        }
    }

    cout << m;

    return 0;
}