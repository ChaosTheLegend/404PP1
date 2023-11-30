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

    (*a)+=2;
}

void print_array(int* arr, int n){
    for (int* i = arr; i != (arr + n); ++i) {
        cout << *i << " ";
    }
}

int main(){

    int a[] = {1,2};

    add_two(a[0]);

    cout << a[0] << " " << a[1];

}