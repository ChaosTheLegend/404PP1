#include <string>
#include <vector>
#include <iostream>

using namespace std;

struct Human{

    string name;
    string surname;
    long long age;
    string gender;

    Human(string name1, string surname1, long long age1, string gender1){
        name = name1;
        surname = surname1;
        age = age1;
        gender = gender1;
    }

};



void print_array(int* arr, int n){
    for (int* i = arr; i != (arr + n); ++i) {
        cout << *i << " ";
    }
}

int main(){
    vector<Human> v;

    Human h = Human("Azat", "Zhumagulov",
                    17,"Male");


    v.push_back(h);

    Human b = Human("Crackus", "The terrible",
                    800, "Wizard");

    v.push_back(b);

    for (auto it = v.begin(); it != v.end() ; ++it) {
        cout << (*it).name << " " << it->surname << " gender: " << it->gender << "\n";
    }


}