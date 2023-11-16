#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    string s, p;
    cin >> s >> p;
    int min = s.find(p);
    reverse(s.begin(), s.end());
    int max = s.length() - s.find(p) - 1;

    if(min == -1) return 0;

    if(min == max) cout << min;
    else cout << min << " " << max;

}