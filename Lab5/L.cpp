#include <string>
#include <iostream>

using namespace std;


int main() {
    string s;
    getline(cin, s);
    int length = s.length();

    for (int i = 1; i < length; ++i) {
        int prev = (int)s[i-1];
        int current = (int)s[i];

        if(current < prev){
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

}
