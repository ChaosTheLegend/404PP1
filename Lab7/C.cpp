#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool binary_search(int* arr, int a, int l, int r){

    if(l > r) return false;

    int mid = (l+r)/2;

    if(arr[mid] == a){
        return true;
    }

    if(a > arr[mid]){
        return binary_search(arr, a, mid+1, r);
    }
    else{
        return binary_search(arr, a, l, mid-1);
    }

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