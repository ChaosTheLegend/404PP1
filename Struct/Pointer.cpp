#include <string>
#include <vector>
#include <iostream>

using namespace std;


void add_two(int b){
    b+=2;
}

void add_two_ref(int& a){

    a+=2;
}

void add_two_pointer(int* a){

    a++;

    (*a)+=2;
}

void print_array(int* arr, int n){
    for (int* i = arr; i != (arr + n); ++i) {
        cout << *i << " ";
    }
}

int main() {

    int b[] = {1, 2};

    int a = 10;

    add_two_pointer(&b[0]);

    cout << b[1];

}