#include <string>
#include <iostream>

using namespace std;

string strToBool(string str){
    if(str.length() > 1) return str;

    if(str[0] == '0') return "false";

    if(str[0] == '1') return "true";

    return str;
}

int main() {

    string s;
    cin >> s;
    cout << strToBool(s);

}
