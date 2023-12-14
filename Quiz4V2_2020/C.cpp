#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>
#include <set>

using namespace std;

bool is_prime(int a){
    for (int i = 2; i*i <= a; ++i) {
        if(a%i == 0) return false;
    }

    return true;
}


int get_prime(int n){
    int count = 0;

    int a = 2;
    while (count < n){
        if(is_prime(a)){
            count++;
        }

        a++;
    }

    return a-1;
}

int main() {
    int a;
    cin >> a;
    int index = get_prime(a);
    cout << get_prime(index);
}