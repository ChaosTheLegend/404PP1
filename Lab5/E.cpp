#include <string>
#include <iostream>

using namespace std;


int main() {

    string s;
    getline(cin, s);
    int length = s.length();

    int oddSum = 0;
    int evenSum = 0;

    for (int i = 0; i < length; ++i) {
        int value = (int)s[i] - '0';

        if(i % 2 == 0){
            evenSum += value;
        }
        else{
            oddSum += value;
        }
    }

    if(oddSum == evenSum) cout << "YES";
    else cout << "NO";

}
