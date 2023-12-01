#include <string>
#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;


int main(){

    vector<string> names;
    vector<int> grades;

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string nm;
        cin >> nm;
        names.push_back(nm);

        int gr;
        cin >> gr;
        grades.push_back(gr);
    }

    sort(names.begin(), names.end());
    sort(grades.begin(), grades.end());

    for (int i = 0; i < names.size(); ++i) {
        cout << names[i] << " " << grades[i] << endl;
    }

}