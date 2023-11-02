#include <iostream>
#include <string>

using namespace std;


int main() {

    //Input
    int n;
    cin >> n;

    int a[n][n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    int max = INT32_MIN;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {

            if(a[i][j] > max) max = a[i][j];

        }
    }

    cout << max;


}
