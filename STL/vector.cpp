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

    cout << "\n";
}

int main() {

    vector<int> v = {17, 2, 87, 43, 12};

    v.size();

    print_vector(v);

    reverse(v.begin()+1, v.end()-1);
    //sort(v.begin()+1, v.end());

    print_vector(v);
}
