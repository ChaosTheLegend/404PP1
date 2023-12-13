#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>
#include <set>
#include <unordered_set>

using namespace std;

void print_set(unordered_set<int>& v){
    for (auto it = v.begin(); it != v.end() ; ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

void print_vector(vector<int>& v){
    for (auto it = v.begin(); it != v.end() ; ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {

    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    auto it = unique(v.begin(), v.end());

    v = vector<int>(v.begin(), it);

    do {
        print_vector(v);
    } while (next_permutation(v.begin(), v.end()));


}