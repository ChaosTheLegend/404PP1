#include <iostream>
#include <cmath>

using namespace std;


int main() {

    int n;
    cin >> n;
    int a[n];
    int b[n];

    for (int i = 0; i < n;i++){
        cin >> a[i];
    }

    for (int i = 0; i < n;i++){
        cin >> b[i];
    }

    int t;
    cin >> t;

    int count = 0;

    for (int i = 0; i < n; ++i) {
        int startTime = a[i];
        int endTime = b[i];

        if (t >= startTime && t <= endTime) {
            count++;
        }
    }

    cout << count << endl;

}
