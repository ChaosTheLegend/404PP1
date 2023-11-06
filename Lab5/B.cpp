#include <string>
#include <iostream>

using namespace std;


int main() {
    string s;
    cin >> s;
    int length = s.length();

    for (int i = 0; i < length; ++i) {
        if(s[i] < 'a') continue;

        s[i] -= 'a' - 'A';
    }
    cout << s;
}
