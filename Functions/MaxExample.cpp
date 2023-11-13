#include <iostream>
#include <string>

using namespace std;

int beer = 10;

int square(int x){


    return x*x;
}

void printArray(int* a, int n){
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}






int FindMax(int* a, int n){

    int max = a[0];

    for (int i = 0; i < n; ++i) {
        if(a[i] > max) max = a[i];
    }

    return max;
}

string addA(string a){

    cout << a << endl;

    a.append("A");
    cout << a << endl;

    beer += 10;

    return a;
}


int main() {

    string a = "Hello World";

    int arr[] = {1, 2, 4, 7};

    int b = FindMax(arr, 4);

    cout << b;

}


