
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;
    int a[n][m];

    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {

        int sum = 0;
        int count = 0;

        for (int j = 0; j < m; ++j) {
            sum += a[i][j];
            count++;
        }

        int mean = sum / count;

        cout << mean << " ";
    }

}