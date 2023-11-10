#include <iostream>
#include <string>

using namespace std;


int main() {

    int n, target;
    cin >> n >> target;

    int a[n];

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i) {
        if(target == a[i]){
            cout << i+1;
            return 0;
        }

        if(target < a[i]){
            cout << i;
            return 0;
        }
    }

    cout << n;


    return 0;
}
