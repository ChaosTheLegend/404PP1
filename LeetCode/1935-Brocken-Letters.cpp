#include <string>
#include <iostream>
#include <map>

using namespace std;

class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        map<char, bool> can_type;

        for (int i = 0; i < 26; ++i) {
            char a = 'a' + i;
            can_type[a] = true;
        }

        for (int i = 0; i < brokenLetters.size(); ++i) {
            char c = brokenLetters[i];
            can_type[c] = false;
        }

        int count = 0;

        bool flag = true;

        for (char c : text) {
            if(c == ' '){
                if(flag) count++;

                flag = true;
                continue;
            }

            if(!can_type[c]){
                flag = false;
            }
        }

        if(flag) count++;

        return count;
    }
};

int main(){
    string s = "hello word";
    string s1 = "l";
    Solution* sol = new Solution();

    cout << sol->canBeTypedWords(s, s1);
}