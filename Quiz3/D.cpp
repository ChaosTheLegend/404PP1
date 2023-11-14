#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

string intToHex(int a){
    if(a < 10) return to_string(a);

    char c = 'A' + (a-10);

    return string(1, c);
}

int main() {

    int a;
    cin >> a;

    string output = "";

    while (a >= 16){
        int mod = a %16;
        string hex = intToHex(mod);
        output.append(hex);
        a/=16;
    }

    string hex = intToHex(a);
    output.append(hex);

    reverse(output.begin(), output.end());

    cout << output;
}
