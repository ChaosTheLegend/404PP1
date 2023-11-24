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
    vector<int> v = {5, 6, 18, 2, 3, 8};

    sort(v.begin(), v.end(), [](int a, int b){
        return a%4 < b%4;
    });

    print_vector(v);
}
