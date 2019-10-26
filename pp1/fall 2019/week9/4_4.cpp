#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main () {
    int n, x;
    cin >> n;

    int max_item = LONG_MIN;
    int min_item = LONG_MAX;

    for(int i = 0; i < n; ++i){
        cin >> x;
        max_item = (max_item < x) ? x : max_item;
        min_item = (min_item > x) ? x : min_item;
    }

    cout << min_item << " " << max_item;

    return 0;
}