#include <iostream>
#define MAXN 1000

using namespace std;


struct heap{
    int a[MAXN];
    int len;
    heap(){
        len = 0;
    }
    int get_min(){
        return a[0];
    }
    int cut_min(){
        int res = a[0];
        a[0] = a[--len];
        int p = 0;
        int x = 2 * p + 1;

        while(x < len){
           int minp = x;
           if(a[x] > a[x +1]){
               minp = x + 1;
           }
           if(a[p] > a[minp]){
               swap(a[p], a[minp]);
               p = minp;
               x = 2 * p + 1;
           }else{
               break;
           }
        }

        return res;
    }
    void add(int val){
        a[len] = val;
        int x = len++;
        int p = (x - 1) / 2;
        while(x > 0 && a[p] > a[x]){
            swap(a[p], a[x]);
            x = p;
            p = (x - 1) / 2;
        }
    }

    void print(){
        for(int i = 0; i < len; ++i){
            cout << a[i] << " ";
        }
    }
};

int main(){

    heap h;
    int n, x;

    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> x;
        h.add(x);
    }

    for(int i = 0; i < n; ++i){
        cout << h.cut_min() << " ";
    }


    return 0;
}