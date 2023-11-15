#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int times_cheated(int* a, int n, int k, int i){

    if(i+1 == n) return 0;

    if(a[i+1] - a[i] < k) return 1 + times_cheated(a, n, k, i+1);

    return times_cheated(a, n, k, i+1);
}

void bobble_sort(int* a, int n){
    if(n == 1) return;

    for (int i = 0; i < n-2; i++) {
        if(a[i] > a[i+1]) swap(a[i], a[i+1]);
    }



    bobble_sort(a, n-1);
}

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    bobble_sort(a, n);

    int b = times_cheated(a, n, k, 0);

    if(a[0] < k) b+=1;

    if(b >= 2) {
        cout << "cheater";
        return 0;
    }

    cout << "no";
}
