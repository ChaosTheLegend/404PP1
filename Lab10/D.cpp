#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int sum(vector<int> v){
    int sum;
    for (int i = 0; i < v.size(); ++i) {
        sum += v[i];
    }

    return sum;
}

int main(){


    vector<vector<int>> vec;

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {

        int m;
        cin >> m;

        vector<int> temp;
        for (int j = 0; j < m; ++j) {
            int a;
            cin >> a;
            temp.push_back(a);
        }

        vec.push_back(temp);
    }


    sort(vec.begin(), vec.end(),
         [](vector<int> a, vector<int> b){
            int sum_a = sum(a);
            int sum_b = sum(b);
            if(sum_a != sum_b) return sum_a < sum_b;
            if(a.size() != b.size()) return a.size() < b.size();

             for (int i = 0; i < a.size(); ++i) {
                 if(a[i] != b[i]) return a[i] < b[i];
             }

             return true;
    });

    for (int i = 0; i < vec.size(); ++i) {
        vector<int> temp = vec[i];

        for (int j = 0; j < temp.size(); ++j) {
            cout << temp[j] << " ";
        }

        cout << "\n";
    }
}