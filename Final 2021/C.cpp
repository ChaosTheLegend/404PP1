#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>
#include <set>

using namespace std;

int sum(int a){

    int ones = a%10;
    int tens = (a/10)%10;
    int hundreds = (a/100);

    return ones + tens + hundreds;
}

int main() {
    int n;
    cin >> n;

    for (int i = 100; i < 1000; ++i) {
        if(n == sum(i)){
            cout << i << endl;
        }
    }
}