#include <string>
#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <cmath>

#define ll long long

using namespace std;

int n;

ll generate_power(){
    ll pw = pow(n,n);
    n--;
    return pw;
}

int main(){

    cin >> n;

    vector<ll> v = vector<ll>(n+1);

    generate(v.rbegin(), v.rend(), generate_power);

    for (auto i = v.begin(); i != v.end(); ++i) {
        cout << *i << " ";
    }
}
