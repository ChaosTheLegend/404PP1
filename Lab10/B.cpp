#include <string>
#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int n;

int generate_power(){
    int pw = pow(n,n);
    n--;
    return pw;
}

int main(){

    cin >> n;

    vector<int> v = vector<int>(n+1);

    generate(v.rbegin(), v.rend(), generate_power);

    for (auto i = v.begin(); i != v.end(); ++i) {
        cout << *i << " ";
    }
}