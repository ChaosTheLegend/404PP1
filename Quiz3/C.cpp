#include <string>
#include <iostream>

using namespace std;

bool is_palindrome(string s){
    if(s.size() <= 1) return true;

    if(s.front() != s.back()) return false;

    s = s.substr(1, s.length() - 2);

    return is_palindrome(s);
}


int max_length(string s){
    if(s.length() == 0) return 0;

    if(!is_palindrome(s)) return s.size();

    s = s.substr(1);
    return max_length(s);
}

int main() {

    string s;
    cin >> s;

    cout << max_length(s);

}
