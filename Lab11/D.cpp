#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main(){

    int n, m;

    cin >> n >> m;

    int a[n][m];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    bool is_cool = true;

    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < m-1; ++j) {
            if(a[i][j] != a[i+1][j]) continue;
            if(a[i][j] != a[i][j+1]) continue;
            if(a[i][j] != a[i+1][j+1]) continue;

            is_cool = false;
            break;
        }

        if(!is_cool) break;
    }

    if(is_cool) cout << "YES";
    else cout << "NO";
}