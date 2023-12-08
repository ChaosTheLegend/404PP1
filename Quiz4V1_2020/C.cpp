#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>

using namespace std;


int main() {
    string s;
    cin >> s;

    cout << "The anagram variants for string " << s << " are: " << endl;


    sort(s.begin(), s.end());


    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

}



