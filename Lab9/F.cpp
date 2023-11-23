#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>

using namespace std;


int main() {

    stack<char> bracket;

    string s;
    getline(cin, s);

    for (auto i = s.begin(); i != s.end(); ++i) {
        char c = *i;

        if(c == '('){
            bracket.push('(');
        }

        if(c == ')'){

            if(bracket.empty()) {
                cout << "NO";
                return 0;
            }

            bracket.pop();
        }
    }


    if(bracket.empty()){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
