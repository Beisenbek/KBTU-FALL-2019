#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

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

    cout << "____________________________________________________" << endl;
    for(int i = 0; i < n; ++i){
        cout << "|\t" << v[i].first << "|\t" << v[i].second.first << "|\t" << v[i].second.second << "|\t" << endl;
    }
    cout << "____________________________________________________" << endl;


    return 0;
}