#include <iostream>

using namespace std;

int partition(int * a, int l, int r){
    int pivot = a[r];
    int i = l - 1;
    for(int j = l; j < r; ++j){
        if(a[j] < pivot){
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[r]);
    return i + 1;
}

void q_sort(int * a, int l, int r){
    if(l < r){
        int index = partition(a, l, r);
        q_sort(a, l, index - 1);
        q_sort(a, index + 1, r);
    }
}

int main(){

    int a[] = {10, 80, 30, 90, 40, 50, 70};

    int n = sizeof(a) / sizeof(int);

    q_sort(a, 0, n - 1);

    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }

    return 0;
}