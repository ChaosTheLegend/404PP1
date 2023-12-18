#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>
#include <set>

using namespace std;
int main() {

    string s;

    cin >> s;

    int at_pos = -1;
    int dot_pos = -1;
    bool valid = true;


    for (int i = 0; i < s.size(); ++i) {
        char c = s[i];

        if(c == '@'){
            if(dot_pos != -1){
                valid = false;
                break;
            }

            if(at_pos != -1){
                valid = false;
                break;
            }

            if(i == s.size()-1){
                valid = false;
                break;
            }

            at_pos = i;
        }

        if(c == '.'){
            if(dot_pos != -1){
                valid = false;
                break;
            }

            if(at_pos == -1){
                valid = false;
                break;
            }

            if(i-at_pos < 2){
                valid = false;
                break;
            }

            if(i == s.size()-1){
                valid = false;
                break;
            }

            dot_pos = i;
        }
    }

    if(valid) cout << "Yes";
    else cout << "No";

}