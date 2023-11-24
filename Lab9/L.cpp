#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>

using namespace std;


int main() {

    vector<pair<int,int>> v;

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        int sum = x + y;

        pair<int,int> a;
        a.first = sum;
        a.second = i+1;
        v.push_back(a);
    }

    // {<2,1>}
    // {<0,2>}
    // {<3,3>}

    sort(v.begin(), v.end(),
         [](pair<int, int> a, pair<int, int> b){
        return a.first < b.first;
    });

    // {<0,2>}
    // {<2,1>}
    // {<3,3>}


    for (auto i = v.begin(); i != v.end(); ++i) {
        cout << i->second << " ";
    }

}
