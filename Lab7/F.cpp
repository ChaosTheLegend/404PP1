#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int count_even(string number, int count){

    if(number.length() == 0) return count;

    int first = (int)number[0] - '0';
    if(first % 2 == 0) count+=1;

    return count_even(number.erase(0, 1), count);
}

int main() {
    string s;
    cin >> s;

    cout << count_even(s, 0);
}