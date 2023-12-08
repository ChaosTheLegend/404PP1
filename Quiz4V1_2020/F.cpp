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
    getline(cin, s);

    vector<string> words;

    string last_word = "";

    for (int i = 0; i < s.size(); ++i) {
        if(s[i] == ' '){
            words.push_back(last_word);
            last_word = "";
            continue;
        }

        last_word += s[i];
    }

    words.push_back(last_word);

    string longest = "";

    for (auto it = words.begin(); it != words.end(); ++it) {
        if(it->size() >  longest.size() ){
            longest = *it;
        }
    }


    cout << longest;

}