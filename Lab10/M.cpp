#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

void print_vector(vector<int> &v){
    for (auto i = v.begin(); i != v.end(); ++i) {
        int a = *i;
        cout << a << " ";
    }
    cout << "\n";
}

int main() {

    int n, m;
    cin >> n >> m;
    vector<int> v1 = vector<int>(n);
    vector<int> v2 = vector<int>(m);

    generate(v1.begin(), v1.end(), [](){
        int a;
        cin >> a;
        return a;
    });

    generate(v2.begin(), v2.end(), [](){
        int a;
        cin >> a;
        return a;
    });

    auto v1_iter = unique(v1.begin(), v1.end());
    auto v2_iter = unique(v2.begin(), v2.end());

    vector<int> merged;

    auto it1 = v1.begin();
    auto it2 = v2.begin();


    while (true){
        if(it1 != v1_iter){
            merged.push_back(*it1);
            it1++;
        }

        if(it2 != v2_iter){
            merged.push_back(*it2);
            it2++;
        }

        if(it1 == v1_iter && it2 == v2_iter){
            break;
        }
    }

    auto m_iter = unique(merged.begin(), merged.end());

    for (auto it = merged.begin(); it != m_iter; ++it) {
        cout << *it << " ";
    }



}
