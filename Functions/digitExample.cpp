#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


void printArray(int a[], int n){
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
}

int main() {

    char n;
    cin >> n;

    if(isdigit(n)) cout << n << " is a digit";
    if(isalpha(n)) cout << n << " is a letter";
    if(ispunct(n)) cout << n << " is a punctuation mark";
}


