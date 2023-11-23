#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

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


    sort(v.begin(), v.end(),
         [](int a, int b){
            if(a%2 == 0 && b%2 == 0){
                return a > b;
            }
             if(a%2 == 1 && b%2 == 1){
                 return a < b;
             }

             if(a%2 == 0) return true;
             if(b%2 == 0) return false;
         }
    );


    print_vector(v);
}