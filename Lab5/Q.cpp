#include <string>
#include <iostream>

using namespace std;


int main() {
    string s1, s2;
    cin >> s1 >> s2;

    string temp = "";

    while (temp.length() <= s2.length()){

        if(temp == s2){
            cout << "YES";
            return 0;
        }

        temp.append(s1);
    }

    cout << "NO";

}
