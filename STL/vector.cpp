#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <set>

using namespace std;

void print_vector(vector<int> &v){
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
}

int main() {
    vector<int> v = {17, 2, 87, 43, 12};

    sort(v.begin(), v.end());

    reverse(v.begin(), v.end());

    auto a = find(v.begin(), v.end(), 10);

    print_vector(v);
}
