#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main() {
    string s;
    string chars;
    char r;

    cin >> s;
    cin >> chars;
    cin >> r;

    for (int i = 0; i < s.length(); ++i) {

        for (int j = 0; j < chars.length(); ++j) {
            if(s[i] == chars[j]){
                s[i] = r;
                break;
            }
        }
    }

    cout << s;

}
