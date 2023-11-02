#include <iostream>
#include <string>

using namespace std;


int main() {

    //Input
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {

        for (int j = 0; j < n-1-i; ++j) {
            cout << ".";
        }

        cout << i+1;

        for (int j = 0; j < i; ++j) {
            cout << ".";
        }

        cout << endl;
    }

}
