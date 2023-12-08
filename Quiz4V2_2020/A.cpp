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

    map<string, int> count;

    for (auto it = words.begin(); it != words.end(); ++it) {
        if(count.find(*it) == count.end()){
            count[*it] = 1;
        }
        else{
            count[*it]++;
        }
    }

    vector<pair<string, int>> pairs;

    for (auto it = count.begin(); it != count.end(); ++it) {
        pairs.push_back(*it);
    }

    sort(pairs.begin(), pairs.end(),
         [](pair<string, int> a, pair<string, int> b){
            if(a.second == b.second) return a.first < b.first;
            return a.second > b.second;
    });


    for (auto it = pairs.begin(); it != pairs.end(); ++it) {
        cout << it->first << " : " << it->second << "\n";
    }



}