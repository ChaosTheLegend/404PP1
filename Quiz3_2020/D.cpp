#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


char to_lower(char a){
    if(a >= 'a' && a <= 'z') return a;

    int dif = 'a' - 'A';

    return a + dif;
}

char to_b(char a){
    if(a == 'p') return 'b';
    return a;
}

char to_e(char a){
    if(a == 'i') return 'e';
    return a;
}

int main() {

    string s1, s2;
    cin >> s1 >> s2;

    if(s1.length() != s2.length()){
        cout << "NO";
        return 0;
    }

    for (int i = 0; i < s1.length(); ++i) {
        s1[i] = to_lower(s1[i]);
        s1[i] = to_b(s1[i]);
        s1[i] = to_e(s1[i]);

        s2[i] = to_lower(s2[i]);
        s2[i] = to_b(s2[i]);
        s2[i] = to_e(s2[i]);
    }

    if(s1 == s2) cout << "YES";
    else cout << "NO";
}