#include <string>
#include <iostream>

using namespace std;


int main() {

    string s1 = "abc";
    string s2 = "abc";

    if(s1.length() != s2.length()){
        cout << "NO";
        return 0;
    }

    for (int i = 0; i < s1.length(); ++i) {
        if(s1[i] != s2[i]){
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
}
