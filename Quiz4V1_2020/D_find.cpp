#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s, p;
    cin >> s >> p;

    string::iterator pos = s.begin();
    int index = 0;

    while (true) {
        pos = find(pos, s.end(), p[0]); // find first character of pattern p in s

        if(pos == s.end()) break;

        index = distance(s.begin(), pos); // compute the index

        if(s.substr(index, p.length()) == p) {
            cout << index << " ";
        }

        pos++; // update to the next character
    }

    return 0;
}