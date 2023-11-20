#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    set<int> s;
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        s.insert(a);
    }

    for (auto i = s.begin(); i != s.end(); ++i) {
        if(*i%2==0){
            s.erase(i);
        }
    }

    for (auto i = s.begin(); i != s.end(); ++i) {
        cout << *i << " ";
    }
}
