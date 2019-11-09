#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){

    int n;
    cin >> n;
    string id;
    int points;

    //pair<string, int> p[n];
    vector<pair<string, int> > v;

    for(int i = 0; i < n; ++i){
        cin >> id >> points;
        v.push_back(make_pair(id, points));
    }

    for(int i = 0; i < n; ++i){
        cout << v[i].first << " " << v[i].second << endl;
    }


    return 0;
}