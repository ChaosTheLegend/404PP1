#include <iostream>
#include <string>

using namespace std;

int* difference(int* a, int* b, int n){
    int* c = new int[n];

    for (int i = 0; i < n; i++) {
        int dif = a[i] - b[i];
        if (dif < 0) dif*=-1;

        c[i] = dif;
    }

    return c;
}

int main() {

    int n;
    cin >> n;

    int a[n];
    int b[n];

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    int* c = difference(a, b, n);

    for (int i = 0; i < n; i++) {
        cout << c[i] << " ";
    }
}


