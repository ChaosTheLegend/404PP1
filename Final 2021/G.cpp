#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>
#include <set>

using namespace std;

int count_pos(vector<int>& v){
    int count = 0;

    for (auto it = v.begin(); it != v.end() ; ++it) {
        if(*it > 0) count++;
    }

    return count;
}


int main() {

     int n, m;
     cin >> n >> m;

     vector<vector<int>> v;

    for (int i = 0; i < n; ++i) {
        vector<int> temp;
        for (int j = 0; j < m; ++j) {
            int a;
            cin >> a;
            temp.push_back(a);
        }
        v.push_back(temp);
    }


    int max_index = -1;
    int max_pos = -1;
    int min_pos = 1000000;

    for (int i = 0; i < v.size(); ++i) {
        int count = count_pos(v[i]);

        if(count > max_pos) {
            max_pos = count;
            max_index = i;
        }
        if(count < min_pos) min_pos = count;
    }


    if(max_pos == min_pos){
        cout << "Numbers are equal" << endl;
        return 0;
    }

    cout << max_index+1 << endl;
}