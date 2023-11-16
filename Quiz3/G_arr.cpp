#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int count[256];

    for (int i = 0; i < 256; ++i) {
        count[i] = 0;
    }

    for (int i = 0; i < s.size(); ++i) {
        char a = s[i];
        int ascii = a;
        count[ascii]++;
    }

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        char c;
        cin >> c;
        a[i] = c;
    }


    for (int i = 0; i < 256; ++i) {

        for (int j = 0; j < n; ++j) {
            if(a[j] == i){
                cout << (char)i << " - " << count[i] << "\n";
            }
        }
    }
}
