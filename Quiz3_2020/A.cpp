#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int prime(int n){

    int count = 0;

    int k = 1;

    while (count < n) {

        k++;

        bool isPrime = true;
        for (int i = 2; i * i <= k; ++i) {
            if (k % i == 0) {
                isPrime = false;
                break;
            }
        }

        if(isPrime) count++;
    }

    return k;
}

int main() {

    int n;
    cin >> n;
    cout << prime(n);
}