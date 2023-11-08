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

    int max_index = 0;

    for (int i = 0; i < n; ++i) {
        int number = a[i];

        if(number > a[max_index]) {
            max_index = i;
        }
    }

    cout << max_index+1;

}
