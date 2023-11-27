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
        set<char> st;

        for (char c : sentence) {
            if(isalpha(c)){
                st.insert(c);
            }
        }

        return st.size() == 26;
    }
};


int main(){
    string s = "qwertyuiopasdfghjklzxcvbnm";

    Solution* sol = new Solution();

    cout << sol->checkIfPangram(s);
}