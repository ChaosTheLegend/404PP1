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
        char a = *i;

        if(a == '(') {
            bracket.push('(');
            continue;
        }

        if(a == ')'){
            if(bracket.empty()){
                cout << "NO";
                return 0;
            }

            bracket.pop();
            continue;
        }
    }


    if(bracket.empty()){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
