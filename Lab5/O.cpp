#include <string>
#include <iostream>

using namespace std;


int main() {
    string s;
    getline(cin, s);
    int length = s.length();

    int max = -1;

    for (int i = 0; i < length; ++i) {
        int current = (int)s[i];

        if(current > max) max = current;
    }

    cout << (char)max;

}
