#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print_vector(vector<int> &v){
    for (auto i = v.begin(); i != v.end(); ++i) {
        int a = *i;

        cout << a << " ";
    }
}


int main() {
    vector<int> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    int k;
    cin >> k;

    sort(v.begin(), v.end());

    int sum = 0;

    for (auto i = v.end() - k; i != v.end(); ++i) {
        sum += *i;
    }

    cout << sum;

}
