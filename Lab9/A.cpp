#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {

    vector<pair<int,int>> v;

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        pair<int,int> p;
        cin >> p.first >> p.second;
        v.push_back(p);
    }


    sort(v.begin(), v.end(),
         [](pair<int,int> a, pair<int,int> b){
                if(a.first < b.first) return true;
                if(a.first > b.first) return false;

                return a.second < b.second;
            }
         );


    for(auto i = v.begin(); i != v.end(); ++i){
        cout << i->first << " " << i->second << endl;
    }
}
