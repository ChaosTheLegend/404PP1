#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>

using namespace std;


int main() {
    string s;
    cin >> s;

    for (char c : s) {
        char newChar = 'z' - c + 'a';

        cout << newChar;
    }

    cout << endl;
}



