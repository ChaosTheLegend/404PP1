#include <string>
#include <iostream>

using namespace std;


int main() {

    string s1 = "ab";
    string s2 = "ab";

    if(s1.length() != s2.length()) cout << "Not equal";
    else{
        int len = s1.length();

        bool isEqual = true;

        for (int i = 0; i < len; ++i) {
            if(s1[i] != s2[i]){
                isEqual = false;
                break;
            }
        }

        if(isEqual)cout << "Equal";
        else cout << "Not Equal";
    }






}
