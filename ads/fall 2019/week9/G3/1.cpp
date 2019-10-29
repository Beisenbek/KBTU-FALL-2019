#include <iostream>
#include <set>

using namespace std;

int main(){

    int n, k, x, cnt = 0;
    cin >> n >> k;

    multiset<int> s;

    for(int i = 0; i < n; ++i){
        cin >> x;
        s.insert(x);
    }

    while(s.size() > 1 && *s.begin() < k){
        int x1 = *s.begin();
        s.erase(s.begin());
        int x2 = *s.begin();
        s.erase(s.begin());
        s.insert(x1 + 2 * x2);
        cnt++;
    }

    if(*s.begin() < k){
        cout << -1;
    }else{
        cout << cnt;
    }

    return 0;
}