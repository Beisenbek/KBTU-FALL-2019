#include <iostream>
#include <cmath>    
#include <map>

using namespace std;

map<int, int> cache;

struct number{
    int value;
    int priority;
    number(int v, int p){
        value = v;
        priority = p;
    }
};

bool compare(number * a, number * b){
    if(a->priority > b->priority) return true;
    else if(a->priority == b->priority && a->value <= b->value) return true;
    return false;
}

int main(){

    int n, m;
    cin >> n >> m;

    int a[n];
    int b[m];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    for(int i = 0; i < m; ++i){
        cin >> b[i];
        cache[b[i]] = m - i;
    }

    number *x[n];

    for(int i = 0; i < n; ++i){
        x[i] = new number(a[i], cache[a[i]]);
    }

    for(int i = 0; i < n - 1; ++i){
        for(int j = i + 1; j < n; ++j){
            if(!compare(x[i], x[j])){
                swap(x[i], x[j]);
            }
        }
    }

    for(int i = 0; i < n; ++i){
        cout << x[i]->value << " ";
    }

    return 0;
}