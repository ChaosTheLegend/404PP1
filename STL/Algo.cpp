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

    reverse(v.begin()+1, v.end()-1);

    sort(v.begin(), v.end());

    swap(v[0], v[1]);

    print_vector(v);

}
