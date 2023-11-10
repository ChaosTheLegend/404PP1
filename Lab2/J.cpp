#include <iostream>
#include <string>

using namespace std;


int main() {

    //Input
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int total_zeros = 0;

    for (int i = 0; i < n; ++i) {

        int number = a[i];

        while (number >= 10) {

            if (number % 10 == 0) total_zeros += 1;

            number /= 10;
        }
    }

    cout << total_zeros;

}
