#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool is_palindrome(string s){

    if(s.length() <= 1) return true;

    if(s.front() != s.back()) return false;

    s.erase(0, 1);
    s.erase(s.length()-1, 1);

    return is_palindrome(s);
}


int main() {
    string s;
    cin >> s;

    if(is_palindrome(s)) cout << "Yes";
    else cout << "No";
}


