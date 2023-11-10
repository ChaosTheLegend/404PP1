#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string to_binary(int n){

    if(n == 1) return "1";

    string result = "";

    result.append(to_binary(n/2));

    if(n%2 == 1) result.append("1");
    else result.append("0");

    return result;
}

int main() {

    int n;
    cin >>n;

    string binary = to_binary(n);

    cout << binary;
}


