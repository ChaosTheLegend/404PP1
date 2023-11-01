#include <iostream>

using namespace std;


int main() {

    int n;
    cin >> n;
    int a[n];


    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int min = 100000;
    int max = -100000;

    for (int i = 0; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }

        if (a[i] > max) {
            max = a[i];
        }
    }

    int dif = max - min + 1;

    int remaining = dif - n;

    cout << remaining << endl;




    return 0;
}
