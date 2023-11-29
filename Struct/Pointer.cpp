#include <string>
#include <vector>
#include <iostream>

using namespace std;


void add_two(int a){
    a+=2;
}

void add_two_ref(int& a){
    a+=2;
}

void add_two_pointer(int* a){
    a+=1;

    (*a)+=2;
}

void print_array(int* arr, int n){
    for (int* i = arr; i != (arr + n); ++i) {
        cout << *i << " ";
    }
}

int main(){

    int a = 5;

    add_two_pointer(&a);

    cout << a;
}