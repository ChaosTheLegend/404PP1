#include <string>
#include <vector>
#include <iostream>

using namespace std;

struct Human{

    string name;
    string surname;

    int age;
    int ageSqr;

    Human(string name1, string surname1, int age1) {
        name = name1;
        surname = surname1;
        age = age1;
        ageSqr = age*age;
    }
};


void add_numbers(int a){
    a+=1;
}

void add_numbers_ref(int& a){
    a+=1;
}

void print_array(int* arr, int n){
    for (int* i = arr; i != (arr + n); ++i) {
        cout << *i << " ";
    }
}

int main(){
    vector<Human> v;

    Human h1 = Human("Askhat", "Ivanov", 72);

    int a = 5;
    int b = a;

    add_numbers_ref(a);

    cout << a;

}