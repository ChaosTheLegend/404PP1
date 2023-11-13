#include <string>
#include <iostream>

using namespace std;

int main() {

    string s = "abacaba";

    string b = "10";

    int a = stoi(b);

    a+= 111;


    s.erase(1, 3);

    s.append("ccc");

    cout << s << " " << a;
}
