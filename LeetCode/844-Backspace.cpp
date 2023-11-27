#include <vector>
#include <string>
#include <iostream>
#include <stack>

using namespace std;


class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;

        for (auto it = s.begin(); it != s.end() ; ++it) {

            char c = *it;

            if(c == '#'){
                if(st.empty()) continue;

                st.pop();
                continue;
            }

            st.push(c);
        }

        string newS = "";

        while (!st.empty()){
            newS.append(string(1, st.top()));
            st.pop();
        }

        for (auto it = t.begin(); it != t.end() ; ++it) {

            char c = *it;

            if(c == '#'){
                if(st.empty()) continue;

                st.pop();
                continue;
            }

            st.push(c);
        }

        string newT = "";

        while (!st.empty()){
            newT.append(string(1, st.top()));
            st.pop();
        }

        return newS == newT;
    }
};




int main(){
    string s = "ab##";
    string t = "a#c#";

    Solution* sol = new Solution();

    cout << sol->backspaceCompare(s, t);
}