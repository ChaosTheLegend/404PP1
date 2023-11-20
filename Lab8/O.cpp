#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;





char to_lower(char a){
    if(a >= 'a' && a <= 'z') return a;
    if(a >= 'A' && a <= 'Z'){
        int dif = 'a' - 'A';
        return a + dif;
    }
}

int main() {
    string s;
    getline(cin, s);

    set<char> char_set;

    for (auto i = s.begin(); i != s.end(); ++i) {
        char a = *i;

        if(!isalpha(a)) continue;

        a = to_lower(a);
        char_set.insert(a);
    }

    cout << char_set.size() << endl;

    for (auto i = char_set.begin(); i != char_set.end(); ++i) {
        cout << *i << " ";
    }
}
