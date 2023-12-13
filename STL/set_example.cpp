#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>
#include <set>

using namespace std;

int main() {

    int l, r;
    cin >> l >> r;

    set<int> s;

    for (int i = l; i < r; ++i) {
        s.insert(i);
    }

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;

        s.erase(a);
    }

    for (auto it = s.begin(); it != s.end() ; ++it) {
        cout << *it << " ";
    }

}