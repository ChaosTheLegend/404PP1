#include <iostream>
#include <cmath>
#include <string>

using namespace std;


int main() {

    int n;
    cin >> n;
    int a[n/2];
    int b[n/2];


    for (int i = 0; i < n/2;i++){
        cin >> a[i];
    }

    for (int i = 0; i < n/2;i++){

        string s;
        cin >> s;
        int length = s.length();

        int number = 0;

        for (int j = length -1; j >= 0; j--) {
            number *=10;
            int temp = s[j] - '0';
            number += temp;
        }

        b[n/2-1-i] = number;
    }


    for (int i = 0; i < n/2; ++i) {
        if(a[i] != b[i]) {
            cout << "NO";
            return -1;
        }
    }

    cout << "YES";

}
