#include <string>
#include <iostream>

using namespace std;


int main() {
    string s;
    getline(cin, s);
    int length = s.length();

    char vowels[] = {'a', 'o', 'i', 'u', 'e'};

    int vowel_count = 0;

    for (int i = 0; i < length; ++i) {
        char a = s[i];


        for (int j = 0; j < 5; ++j) {
            char vowel = vowels[j];

            if(a == vowel){
                vowel_count++;
                break;
            }
        }
    }

    cout << vowel_count;
}
