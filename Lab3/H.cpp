#include <iostream>
#include <string>

using namespace std;


int main() {

    int n;
    cin >> n;

    int l, r;

    cin >> l >> r;

    int a[n];

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int sum = 0;

    for (int i = 1; i <= r-1; ++i) {
        sum += a[i];
    }

    cout << sum;

}
