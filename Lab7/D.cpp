#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int sum(string s){

    if(s.length() == 0) return 0;

    int n = (int)s[0] - '0';

    s.erase(0, 1);

    return n + sum(s);
}

int main() {

    string s;
    cin >> s;

    cout << sum(s);
}
