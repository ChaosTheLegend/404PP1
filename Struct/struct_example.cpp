#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

struct Student{

    string name;
    string surname;
    int age;
    string gender;

    Student(string name, string surname, int age, string gender){
        this->name = name;
        this->surname = surname;
        this->age = age;
        this->gender = gender;
    }
};



void print_array(int* arr, int n){
    for (int* i = arr; i != (arr + n); ++i) {
        cout << *i << " ";
    }
}

int main(){

    vector<Student> students;

    Student h1 = Student("Ivan", "Yakimov", 22, "Male");
    students.push_back(h1);
    Student h2 = Student("Leah", "", 21, "Female");
    students.push_back(h2);

    for (auto it = students.begin(); it != students.end(); ++it) {
        cout << "Student: " << it->name << " " << it->surname << " Age: " << it-> age << " " << it->gender << "\n";
    }


}