#include <iostream>
#include <string>
#include <map>
#include <set>


using namespace std;


int main() {

    int n;
    cin >> n;
    map<string,string> history;

    for (int i = 0; i < n; ++i) {
        string oldName, newName;

        cin >> oldName >> newName;

        auto it = history.find(oldName);

        if(it == history.end()) {
            history[newName] = oldName;
        }
        else{
            string prevName = history[oldName];

            history.erase(oldName);

            history[newName] = prevName;
        }
    }

    cout << history.size() << endl;

    map<string, string> fixedMap;

    for (auto it = history.begin(); it != history.end(); ++it) {
        fixedMap[it->second] = it->first;
    }

    for (auto it = fixedMap.begin(); it != fixedMap.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }

}
