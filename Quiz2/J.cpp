#include <iostream>
#include <string>

using namespace std;


int main() {

    string s;

    cin >> s;

    int n = s.length();

    int min = 100000000;
    int max = -1;

    for (int i = 0; i < n; i++) {
        int number = s[i] - '0';

        if(number > max){
            max = number;
        }

        if(number < min){
            min = number;
        }
    }

    cout << max << " " << min;


}
