#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>
#include <vector>
#include <algorithm>

using namespace std;


void print_vector(vector<int> &v){
    for (auto i = v.begin(); i != v.end(); ++i) {
        int a = *i;
        cout << a << " ";
    }
    cout << "\n";
}

void count_if_example(){
    vector<int> v = { 1, 3, 4, 7, 1, 2};


    int less_than_five =
            count_if(v.begin(), v.end(),
                     [](int a){
                         return a == 1; });

    cout << less_than_five;
}

void rotate_example(){
    vector<int> v = { 0, 1, 3, 4, 7, 1, 2};
    //{ 0, 1, 3, 4, 7, 1, 2};
    print_vector(v);
    rotate(v.begin(), v.begin() + 3 ,v.end());

    // { 4, 7, 1, 2, 0, 1, 3};
    print_vector(v);
}

int main() {
    //count_if_example();
    rotate_example();
}
