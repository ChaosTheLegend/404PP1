#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    map<char, int> count;

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        char a;
        cin >> a;
        count[a] = 0;
    }

    for (int i = 0; i < s.length(); ++i) {
        char c = s[i];
        if(count.find(c) != count.end()){
            count[c]++;
        }
    }

    for (auto it = count.begin(); it != count.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }

}
