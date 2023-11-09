#include <iostream>
#include <string>

using namespace std;

bool is_valid(string s, int n){
    int digit_count = 0;
    for (int i = 0; i < s.length(); ++i) {
        if(isdigit(s[i])) digit_count++;
    }

    if(digit_count == n) return true;
    else return false;
}

int main() {

    string s;
    int n;
    cin >> s >> n;

    if(is_valid(s, n)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}


