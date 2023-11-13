#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int inf_sum(int sum){

    int a;
    cin >> a;
    sum+=a;

    if(a == 0) return sum;

    return inf_sum(sum);
}

int main() {
    cout << inf_sum(0);
}


