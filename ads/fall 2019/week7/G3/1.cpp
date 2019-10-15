#include <iostream>
#define MAXN 10000

using namespace std;

struct heap{
    private:
        int val[MAXN];
        int len;
    public:
        heap(){
            len = 0;
        }
        void sift_up(int c){
            int p = (c - 1) / 2;
            while(p >= 0 && val[c] > val[p]){
                swap(val[c], val[p]);
                c = p;
                p = (c - 1) / 2;
            }
        }

        void sift_down(int p){
            int c = 2 * p + 1;
            while(c < len){
                int mpos = c;
                if(c + 1 < len && val[c] < val[c + 1]){
                    mpos = c + 1;
                }
                //int mpos = (val[c] < val[c + 1]) ? c : c + 1;
                if(val[p] < val[mpos]){
                    swap(val[p], val[mpos]);
                    p = mpos;
                    c = 2 * p + 1;
                }else{
                    break;
                }
            }
        }

        void add(int x){
            val[len] = x;
            len++;
            sift_up(len - 1);
        }

        int cut_max(){
            int res = val[0];
            val[0] = val[len - 1];
            len--;
            sift_down(0);
            return res;
        }
        int get_max(){
            return val[0];
        }
};

int main(){

    int a[] = {1, 2, 3, 14, 55, 6, 7};
    int n = sizeof(a) / sizeof(int);

    heap h;

    for(int i = 0; i < n; ++i){
        h.add(a[i]);
    }

    for(int i = 0; i < n; ++i){
        cout << h.cut_max() << " ";
    }
    

    return 0;
}