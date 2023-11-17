#include <string>
#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int length = s.length();

    for (int i = 0; i < length; ++i) {
        if(!isalpha(s[i])) continue;

        if(s[i] == 'z') s[i] = 'a';
        else if (s[i] == 'Z') s[i] = 'A';
        else{
            s[i]++;
        }
    }

    cout << s;

}
