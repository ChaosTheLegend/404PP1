#include <iostream>
#include <string>

using namespace std;


int main() {

    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }


    for (int i = 1; i < n; ++i) {
        int prev = a[i-1];
        int current = a[i];

        if (prev != current) {
            cout << prev << " ";
        }
    }

    cout << a[n-1];
}
