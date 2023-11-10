#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool binary_search(int* arr, int a, int l, int r){

    if(l > r) return false;

    int mean = (l+r)/2;

    if(a == arr[mean]) return true;

    if(a > mean) return binary_search(arr, a, mean +1, r);
    else return binary_search(arr, a, l, mean -1);
}

int main() {

    int n;
    cin >>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int a;
    cin >> a;

    bool is_found = binary_search(arr, a, 0, n-1);

    if(is_found) cout << "YES";
    else cout << "NO";
}