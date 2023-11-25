#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

void print_set(set<int> &s){
    for (auto i = s.begin(); i != s.end(); ++i) {
        int a = *i;

        cout << a << " ";
    }
}

void print_vector(vector<int> &v){
    for (auto i = v.begin(); i != v.end(); ++i) {
        int a = *i;

        cout << a << " ";
    }
}

int main() {
    set<int> s;

    s.insert(4);
    s.insert(5);
    s.insert(3);


    int b;
    cin >> b;

    auto it = s.find(b);

    if(it == s.end()) cout << "Not found";
    else cout << "Found";



    //print_set(s);


}
