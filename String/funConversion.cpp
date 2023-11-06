#include <string>
#include <iostream>

using namespace std;


int main() {
    string s;
    cin >> s;
    int length = s.length();

    for (int i = 0; i < length; ++i) {

        s[i] += 'a' - 'A' - 1;
    }
    cout << s;
}
