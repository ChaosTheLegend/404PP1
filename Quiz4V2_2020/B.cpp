#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>
#include <set>

using namespace std;

bool is_different(int a){
    set<char> char_set;
    string s = to_string(a);

    for (int i = 0;i < s.length(); i++) {
        char c = s[i];
        char_set.insert(c);
    }

    if(char_set.size() == s.size()) return true;

    return false;
}

int main() {

    int l, r;

    cin >> l >> r;

    for (int i = l; i <= r; ++i) {
        if(is_different(i)){
            cout << i << endl;
            return 0;
        }
    }

    cout << "Understandable, have a great day" << endl;
}