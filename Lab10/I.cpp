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

    vector<int> a;
    vector<int> b;

    for (int i = 0; i < n; ++i) {
        int c;
        cin >> c;
        a.push_back(c);
        b.push_back(c);
    }

    reverse(b.begin(), b.end());

    for (int i = 0; i < n; ++i) {
        if(a[i] == b[i]) cout << "OK" << "\n";
        else{
            cout << "Instead of " << a[i] << " here was " << b[i] << "\n";
        }
    }


}