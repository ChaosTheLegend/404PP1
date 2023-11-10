#include <iostream>
#include <string>

using namespace std;




int getMax(int* a, int n){


}


int main() {

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int max = a[0];

    for (int i = 0; i < n; ++i) {
        if(a[i] > max) max = a[i];
    }

    int min = a[0];

    for (int i = 0; i < n; ++i) {
        if(a[i] < min) min = a[i];
    }


    for (int i = 0; i < n; ++i) {
        if(a[i] == max) a[i] = min;
    }


    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    cout << endl;

}
