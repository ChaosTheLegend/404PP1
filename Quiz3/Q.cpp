#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin >> n;
    string s_arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> s_arr[i];
    }

    for (int i = 0; i < n; ++i) {
        if(s_arr[i].find("@gmail.com") == s_arr[i].length() - 10){
            cout << s_arr[i].erase(s_arr[i].length() - 10, 10) << "\n";
        }
    }
}