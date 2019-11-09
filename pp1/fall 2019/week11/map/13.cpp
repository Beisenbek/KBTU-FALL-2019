#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool f(pair<string, pair<string, int> > a, pair<string, pair<string, int> > b ){
    if(a.second.second < b.second.second) return false;
    if(a.second.second == b.second.second){
        if(a.second.first > b.second.first){
            return false;
        }
    }
    return true;
}

int main(){

    int n;
    cin >> n;
    string id, facutlty;
    int points;

    //pair<string, int> p[n];
    vector<pair<string, pair<string, int> > > v;

    for(int i = 0; i < n; ++i){
        cin >> id >> facutlty >>points;
        pair<string, int> p1 = make_pair(facutlty, points);
        pair<string, pair<string, int> > p2 = make_pair(id, p1);
        v.push_back(p2);
    }

    sort(v.begin(), v.end(), f);

    cout << "____________________________________________________" << endl;
    for(int i = 0; i < n; ++i){
        cout << "|\t" << v[i].first << "|\t" << v[i].second.first << "|\t" << v[i].second.second << "|\t" << endl;
    }
    cout << "____________________________________________________" << endl;


    return 0;
}