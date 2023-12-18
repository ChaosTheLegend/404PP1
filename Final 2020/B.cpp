#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>
#include <set>

using namespace std;

int main() {

    int n;
    cin >> n;


    //1st tri
    for (int i = 0; i < n; ++i) {

        for (int j = 0; j < n; ++j) {
            cout << " ";
        }

        if(i == n-1){
            for (int j = 0; j < n*2 - 1; ++j) {
                cout << "*";
            }
        }
        else {

            for (int j = 0; j < n - i - 1; ++j) {
                cout << " ";
            }
            if (i == 0) cout << "*";
            else {
                cout << "*";
                for (int j = 0; j < i * 2 - 1; ++j) {
                    cout << " ";
                }
                cout << "*";
            }

            for (int j = 0; j < n - i - 1; ++j) {
                cout << " ";
            }
        }
        cout<< endl;
    }


    for (int i = 0; i < n; ++i) {

        for (int k = 0; k < 2; ++k) {

            if (i == n - 1) {
                for (int j = 0; j < n * 2 - 1; ++j) {
                    cout << "*";
                }
            } else {

                for (int j = 0; j < n - i - 1; ++j) {
                    cout << " ";
                }
                if (i == 0) cout << "*";
                else {
                    cout << "*";
                    for (int j = 0; j < i * 2 - 1; ++j) {
                        cout << " ";
                    }
                    cout << "*";
                }

                for (int j = 0; j < n - i - 1; ++j) {
                    cout << " ";
                }
            }

            cout << " ";
        }
        cout<< endl;
    }
}