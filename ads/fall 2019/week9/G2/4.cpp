#include <iostream>
#include <cmath>    
#include <map>
#include <algorithm>
#define MAXN 1000

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

struct heap{
    private:
        number *a[MAXN];
        int len;

    public:
        heap(){
            len = 0;
        }

        number * get_min(){
            return a[0];
        }
        number * cut_min(){
            number * res = a[0];
            a[0] = a[--len];
            sift_down(0);
            return res;
        }

        void sift_down(int p){
            int l = 2 * p + 1;
            while(l < len){
                int maxpindex = l;
                if(!compare(a[l], a[l + 1])){
                    maxpindex = l + 1;
                }
                if(!compare(a[p],a[maxpindex])){
                    swap(a[p], a[maxpindex]);
                }else{
                    break;
                }
                p = maxpindex;
                l = 2 * p + 1;
            }
        }

        void sift_up(int x){
            int p = (x - 1) / 2;
            while(x > 0 && !compare(a[p], a[x])){
                swap(a[p], a[x]);
                x = p;
                p = (x - 1) / 2;
            }
        }

        void add(int value, int priority){
            int x = len;
            a[len++] = new number(value, priority);
            sift_up(x);
        }

        void print(){
            for(int i = 0; i < len; ++i){
                cout << a[i]->value << " ";
            }
            cout << endl;
        }
};



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

    heap h;

    for(int i = 0; i < n; ++i){
        h.add(a[i], cache[a[i]]);
    }

    for(int i = 0; i < n; ++i){
        cout << h.cut_min()->value << " ";
    }

    return 0;
}