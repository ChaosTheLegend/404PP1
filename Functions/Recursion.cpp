#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int sum(int n, int min){
    if(n == min) return min;
    return n + sum(n-1, min);
}

int factorial(int n){

    if(n == 0) return 1;

    return n * factorial(n-1);
}

int fib(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fib(n-1) + fib(n-2);
}

int main() {

    cout << sum(-5, -10);
}


