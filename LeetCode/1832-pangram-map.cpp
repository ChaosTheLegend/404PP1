#include <vector>
#include <string>
#include <iostream>
#include <stack>
#include <map>
#include <set>

using namespace std;

class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<char, int> mp;

        for (char c : sentence) {
            if(!isalpha(c)) continue;

            if(mp.find(c) == mp.end()){
                mp[c] = 1;
            }
            else{
                mp[c]++;
            }
        }

        if(mp.size() != 26) return false;

        for (auto it = mp.begin(); it != mp.end() ; ++it) {
            if(it->second < 1) return false;
        }

        return true;
    }
};


int main(){
    string s = "qwertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvbn";

    Solution* sol = new Solution();

    cout << sol->checkIfPangram(s);
}