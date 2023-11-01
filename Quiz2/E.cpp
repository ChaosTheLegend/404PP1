#include <iostream>
#include <string>

using namespace std;


int main() {


    string s;

    cin >> s;

    int n = s.length();
    int firstDigit;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        if(i == 0){
            firstDigit = s[i] - '0';
        }
        else{
            int number = s[i] - '0';
            sum += number;
            sum %= 10;
        }
    }

    if(firstDigit == sum){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

}
