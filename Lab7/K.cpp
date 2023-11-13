#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int max(string s, int sub_max){
    if(s.length() == 0) return sub_max;

    int a = (int)s[0] - '0';

    if(a > sub_max) sub_max = a;

    return max(s.erase(0, 1), sub_max);
}

int main() {
    string s;
    cin >> s;

    cout << max(s, -1);
}


