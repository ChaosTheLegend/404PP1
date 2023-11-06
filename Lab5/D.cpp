#include <string>
#include <iostream>

using namespace std;


int main() {

    string s;
    getline(cin, s);

    int length = s.length();

    for (int i = 0; i < length/2; ++i) {
        char front = s[i];
        char back = s[length-1-i];

        if(front != back){
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
}
