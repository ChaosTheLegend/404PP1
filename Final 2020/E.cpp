#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;


int main() {

    int n;
    cin >> n;
    map<string,set<string>> combos;

    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        set<string> temp;

        combos[s] = temp;
    }

    cin>> n;

    for (int i = 0; i < n; ++i) {
        string p1, p2;
        cin >> p1 >> p2;
        combos[p1].insert(p2);
        combos[p2].insert(p1);
    }

    string a;
    cin >> a;

    set<string> a_combos = combos[a];

    cout << a_combos.size() << endl;

    for (set<string> :: iterator it = a_combos.begin(); it != a_combos.end(); ++it) {
        cout << *it << " ";
    }


}
