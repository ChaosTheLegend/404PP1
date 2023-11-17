#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    string s;
    cin >> s;

    int max = 1;
    char max_letter = s[0];
    int count = 1;

    for (int i = 1; i < s.length(); ++i) {

        if(s[i] != s[i-1]){
            if(count > max){
                max = count;
                max_letter = s[i-1];
            }
            count = 1;
        }

        if(s[i] == s[i-1]){
            count++;
        }
    }

    if(count > max){
        max = count;
        max_letter = s[s.length()-1];
    }


    cout << max_letter << " " << max << endl;


}