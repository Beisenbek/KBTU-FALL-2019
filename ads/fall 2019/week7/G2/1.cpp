#include <iostream>
#define MAXN 1000

using namespace std;

struct heap{
    private:
        int a[MAXN];
        int len;

    public:
        heap(){
            len = 0;
        }

        int get_min(){
            return a[0];
        }
        int cut_min(){
            int res = a[0];
            a[0] = a[--len];
            sift_down(0);
            return res;
        }

        void sift_down(int p){
            int l = 2 * p + 1;
            //int minp = (a[l] < a[l + 1]) ? l : l + 1;
            while(l < len){
                int minp = l;
                if(a[l] > a[l + 1]){
                    minp = l + 1;
                }
                if(a[p] > a[minp]){
                    swap(a[p], a[minp]);
                }else{
                    break;
                }
                p = minp;
                l = 2 * p + 1;
            }
        }

        void sift_up(int x){
            int p = (x - 1) / 2;
            while(x > 0 && a[p] > a[x]){
                swap(a[p], a[x]);
                x = p;
                p = (x - 1) / 2;
            }
        }

        void add(int val){
            int x = len;
            a[len++] = val;
            sift_up(x);
        }

        void print(){
            for(int i = 0; i < len; ++i){
                cout << a[i] << " ";
            }
            cout << endl;
        }
};

int main(){
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(int);

    heap h;

    for(int i = 0; i < n; ++i){
        h.add(arr[i]);
    }

    for(int i = 0; i < n; ++i){
        cout << h.cut_min() << " ";
    }

    return 0;
}