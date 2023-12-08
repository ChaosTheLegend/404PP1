#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>
#include <set>

using namespace std;

set<char> to_set(string s){
    set<char> chars;
    for (int i = 0; i < s.size(); ++i) {
        chars.insert(s[i]);
    }

    return chars;
}


int main() {
    string s;
    cin >> s;

    while (true) {
        int n = stoi(s);
        n++;
        s = to_string(n);

        set<char> char_set = to_set(s);
        if (char_set.size() == s.size()) {
            cout << s << endl;
            break;
        }
    }


}