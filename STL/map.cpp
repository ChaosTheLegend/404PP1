#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

void print_set(set<int> &s){
    for (auto i = s.begin(); i != s.end(); ++i) {
        int a = *i;

        cout << a << " ";
    }
}

void print_vector(vector<int> &v){
    for (auto i = v.begin(); i != v.end(); ++i) {
        int a = *i;

        cout << a << " ";
    }
}

int main() {
    // 0 1 2 3
    // 2 4 1 6

    // "kaspi", "KBTU", "Home" ...
    //  7263,    14343, 214143

    map<string, int> phoneBook;

    phoneBook["KBTU"] = 174581;
    phoneBook["Kaspi"] = 43342;


    string k;
    int v;
    cin >> k >> v;
    phoneBook[k] = v;




    for (auto i = phoneBook.begin(); i != phoneBook.end(); ++i) {
        //pair<string, int> p = *i;

        cout << i->first << " " << i->second << endl;
    }



}
