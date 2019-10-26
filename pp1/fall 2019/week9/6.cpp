#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int d = abs(x2 - x1);
    int k = -1;
    if (x1 > x2) k = 1;  
    cout << x2  << " " << y2 + d * k <<  " " << x1 << " " << y1 + d * k;
    return 0;
}