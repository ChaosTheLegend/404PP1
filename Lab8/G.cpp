#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print_vector(vector<int> &v){
    for (auto i = v.begin(); i != v.end(); ++i) {
        int a = *i;

        cout << a << " ";
    }
}

bool isPrime(int p){
    bool prime = true;
    for (int i = 2; i*i <= p; ++i) {
        if(p%i == 0){
            prime = false;
            break;
        }
    }

    return prime;
}


int main() {
    vector<int> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    int k;
    cin >> k;

    int count = 0;

    for (auto i = v.begin(); i != v.end(); ++i) {
        int a = *i;
        if(a <= k) continue;

        if(isPrime(a)) count++;
    }

    cout << count;

}
