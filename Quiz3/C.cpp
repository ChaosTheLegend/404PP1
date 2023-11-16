#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a%b);
}

int main() {

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin>> a[i];
    }

    int max = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(i == j) continue;

            int g = gcd(a[i], a[j]);

            if(g>max) max = g;
        }
    }


    cout << max;
}