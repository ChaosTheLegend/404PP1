#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string to_binary(int n){

    if(n == 0) return "0";
    if(n == 1) return "1";

    string result = "";

    result.append(to_binary(n/2));

    if(n % 2 == 0) result.append("0");
    else result.append("1");
    
    return result;
}

int main() {

    int n;
    cin >>n;

    string binary = to_binary(n);

    cout << binary;
}


