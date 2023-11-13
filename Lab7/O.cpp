#include <iostream>
#include <string>
#include <algorithm>
using namespace std;





string int_to_letter(int a){
    if(a < 10) return to_string(a);

    int temp = a - 10;

    char l = 'A' + temp;

    return string(1, l);
}

string to_k_nary(int n, int k){

    if(n < k){
        return int_to_letter(n);
    }

    string result = "";

    result.append(to_k_nary(n/k, k));

    result.append(int_to_letter(n%k));

    return result;
}

int main() {

    int n, k;
    cin >>n >> k;

    string binary = to_k_nary(n, k);

    cout << binary;
}
