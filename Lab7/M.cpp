#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void printNumbers(int n){

    if(n == 0) return;

    printNumbers(n-1);

    cout << n << " ";
}

int main() {

    int n;
    cin >> n;
    printNumbers(n);
}


