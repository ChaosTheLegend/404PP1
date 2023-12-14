#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v1;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v1.push_back(a);
    }
    vector<int> v2;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        v2.push_back(a);
    }

    sort(v1.begin(), v1.end());

    for (int i = 0; i < v2.size(); ++i) {

        int target = v2[i];

        int l = 0;
        int r = v1.size() - 1;

        while (l != r) {
            int a = v1[l];
            int b = v1[r];
            int sum = a + b;
            if (sum == target) {
                cout << "YES" << endl;
                break;
            }

            if (sum > target) {
                r--;
                continue;
            }

            if (sum < target) {
                l++;
                continue;
            }
        }

        if (l == r) {
            cout << "NO" << endl;
        }
    }
}