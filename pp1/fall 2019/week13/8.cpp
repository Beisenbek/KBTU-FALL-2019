#include <iostream>
#include <vector>

using namespace std;


bool needSwap(pair<int, pair<int, int> >p1, pair<int, pair<int, int> >p2){
    if(p1.first > p2.first) return true;
    if(p1.first == p2.first && p1.second.first > p2.second.first) return true;
    if(p1.first == p2.first && p1.second.first == p2.second.first && p1.second.second > p2.second.second) return true;
    return false;
}

int main(){
    vector<pair<int, pair<int, int> > > v;
    int n, a, b, c;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> a >> b >> c;
        v.push_back(make_pair(a, make_pair(b, c)));
    }    

    for(int i = 0; i < n - 1; ++i){
        for(int j = i + 1; j < n; ++j){
            if(needSwap(v[i], v[j])){
                swap(v[i], v[j]);
            }
        }
    }

    for(int i = 0; i < n; ++i){
        cout << v[i].first << " " << v[i].second.first << " " << v[i].second.second << endl;
    }


    return 0;
}