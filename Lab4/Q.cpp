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

        for (int j = 0; j < 1+i*2; ++j) {
            cout << "*";
        }

        for (int j = 0; j < n-1-i; ++j) {
            cout << ".";
        }

        cout << endl;
    }

}
