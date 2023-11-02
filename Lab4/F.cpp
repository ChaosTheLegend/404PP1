#include <iostream>
#include <string>

using namespace std;


int main() {

    //Input
    int n;
    cin >> n;

    int a[n][n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }


    int max = INT32_MIN;
    int max_x = 0;
    int max_y = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int number = a[i][j];

            if(number > max){
                max = number;
                max_x = i;
                max_y = j;
            }
        }
    }

    cout << max_x+1 << " " << max_y+1;

}
