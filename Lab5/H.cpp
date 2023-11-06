#include <string>
#include <iostream>

using namespace std;


int main() {
    string s;
    getline(cin, s);
    int length = s.length();

    int count[10];

    for (int i = 0; i < 10; ++i) {
        count[i] =0;
    }

    for (int i = 0; i < length; ++i) {
        int value = (int)s[i] - '0';

        count[value]++;
    }

    int maxCount = -1;

    for (int i = 0; i < 10; ++i) {
        if(count[i] == 0) continue;

        if(maxCount == -1) maxCount = count[i];
        else{

            if(count[i] != maxCount){
                cout << "NO";
                return 0;
            }

        }
    }

    cout << "YES";

}
