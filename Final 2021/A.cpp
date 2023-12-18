#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>
#include <set>

using namespace std;

int main() {
    int n, l, r;
    cin >> n >> l >> r;

    vector<int> v;

    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    reverse(v.begin()+l-1, v.begin()+r);


    for (int i = 0; i < n; ++i) {
        cout << v[i] << " ";
    }
}