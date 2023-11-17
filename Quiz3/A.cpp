#include <string>
#include <iostream>

using namespace std;

int main() {

    string s;
    getline(cin, s);
    int length = s.length();


    string output[length];

    int startWord = 0;
    int endWord = 0;
    int k = 0;
    bool hasNumber = false;

    for (int i = 0; i < length; ++i) {
        if(s[i] == ' '){
            endWord = i-1;
            int wordLength = endWord - startWord + 1;
            string word = s.substr(startWord, wordLength);

            if(!hasNumber) {
                output[k] = word;
                k++;
            }

            hasNumber = false;
            startWord = i+1;
            continue;
        }

        if(isdigit(s[i])){
            hasNumber = true;
        }
    }

    int wordLength = s.length() - startWord;
    string word = s.substr(startWord, wordLength);
    if(!hasNumber) {
        output[k] = word;
        k++;
    }

    for (int i = 0; i < k; ++i) {
        cout << output[i] << endl;
    }


}
