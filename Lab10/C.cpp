#include <string>
#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <cmath>
#include <stack>

using namespace std;


int main(){

    string s;
    getline(cin, s);

    stack<char> chars;

    for (char c : s) {

        if(c == ' ') continue;

        if(chars.empty()){
            chars.push(c);
            continue;
        }

        char topChar = chars.top();

        string num = string(1,topChar) + string (1, c);

        int nm = stoi(num);

        if(nm == 16 || nm == 25 || nm == 36 || nm == 49 || nm == 64 || nm == 81){
            chars.pop();
            continue;
        }

        chars.push(c);
    }


    if(chars.empty()) {
        cout << "Stack is empty";
        return 0;
    }

    while (!chars.empty()){
        cout << chars.top();
        chars.pop();
    }

}