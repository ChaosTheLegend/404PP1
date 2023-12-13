#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>
#include <set>

using namespace std;

int count_pillars(vector<int>& v, int l, int r){
    int count = 0;
    int max_height = 0;
    for (int i = l; i <= r; ++i) {
        if(v[i] > max_height){
            count++;
            max_height = v[i];
        }
    }

    return count;
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

    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int l,r;
        cin >> l >> r;
        int pillars = count_pillars(v, l, r);

        cout << pillars << endl;
    }
}