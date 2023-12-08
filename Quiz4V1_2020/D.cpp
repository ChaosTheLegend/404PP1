#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>

using namespace std;


int main() {
    string s;
    string p;
    cin >> s >> p;

    int pattern_length = p.length();
    for (int i = 0; i < s.size() - p.size() + 1; ++i) {

        string sb_str = s.substr(i, pattern_length);

        if(sb_str == p){
            cout << i << " ";
        }
    }

}



