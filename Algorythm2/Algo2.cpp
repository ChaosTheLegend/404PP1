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


void print_vector(vector<long long> &v){
    for (auto i = v.begin(); i != v.end(); ++i) {
        int a = *i;
        cout << a << " ";
    }
    cout << "\n";
}

void print_vector(vector<int> &v){
    for (auto i = v.begin(); i != v.end(); ++i) {
        int a = *i;
        cout << a << " ";
    }
    cout << "\n";
}

bool isEven(int a){
    return a%2 == 0;
}

int f1 = 1;
int f2 = 2;

int main() {

    vector<int> v = vector<int>(3);





    print_vector(v);

    //count_if_example();
    //rotate_example();
    //fill_example();
    //unique_example();
    //foreach_example();
    //generate_example();
    //random_example();

    //permutation_example();
}
