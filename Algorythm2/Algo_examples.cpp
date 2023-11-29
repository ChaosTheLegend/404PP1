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

void count_if_example(){
    vector<int> v = { 1, 3, 4, 7, 1, 2};


    int less_than_five =
            count_if(v.begin(), v.end(),
    [](int a){
               return a%2!=0;
            });


    cout << less_than_five;
}

void rotate_example(){
    vector<int> v = { 0, 1, 3, 4, 7, 1, 2, 8};
    //{ 0, 1, 3, 4, 7, 1, 2, 8};
    //{ 4, 7, 1, 2, 8, 0, 1, 3};
    print_vector(v);
    rotate(v.begin(), v.begin() +3,v.end());

    // { 4, 7, 1, 2, 0, 1, 3};
    print_vector(v);
}


void fill_example(){
    vector<int> v = vector<int>(20);

    fill(v.begin(), v.end()-2, 10);
    print_vector(v);
}

void unique_example(){

    vector<int> v = {1, 1, 1, 2, 4, 6, 10, 10, 1 ,6, 5};

    print_vector(v);

    auto unique_iter = unique(v.begin(), v.end());

    //010110011

    for (auto it = v.begin(); it != unique_iter; ++it) {
        cout << *it << " ";
    }
}



void foreach_example(){

    vector<int> v = {1, 1, 1, 2, 4, 6, 10, 1 ,6, 5};

    for_each(v.begin(), v.end(),
    [](int& a){
        a *= 2;
    });

    print_vector(v);
}

long long fib_2 = 0;
long long fib_1 = 1;

long long get_next_fib(){
    long long sum = fib_2 + fib_1;
    fib_2 = fib_1;
    fib_1 = sum;
    return sum;
}



void generate_example(){
    vector<long long> v = vector<long long>(100);

    v[0] = 0;
    v[1] = 1;

    generate(v.begin()+2, v.end(),
    get_next_fib);

    print_vector(v);
}


void random_example(){

    srand(time(0));

    for (int i = 0; i < 100; ++i) {

        cout << rand()%10 << " ";
    }
}


int n = 0;
int generate_numbers(){
    n++;
    return n;
}

void permutation_example(){
    vector<int> v = {1, 1, 2};

    do{
        print_vector(v);
    } while (next_permutation(v.begin(), v.end()));


}

int main() {
    //count_if_example();
    //rotate_example();
    //fill_example();
    //unique_example();
    //foreach_example();
    //generate_example();
    //random_example();

    permutation_example();
}
