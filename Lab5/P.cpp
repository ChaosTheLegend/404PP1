#include <string>
#include <iostream>

using namespace std;


int main() {
    string s;
    getline(cin, s);
    int length = s.length();

    int max = -1;

    for (int i = 0; i < length; ++i) {
        if(s[i] == 'z') s[i] = 'a';
        else{
            s[i]++;
        }
    }

    cout << s;

}
