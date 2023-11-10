#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


void printArray(int a[], int n){
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
}

int main() {

    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    sort(a, a+n);

    printArray(a, n);

}


