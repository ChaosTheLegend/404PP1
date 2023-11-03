#include <iostream>
#include <string>

using namespace std;


int main() {

    int n;
    cin >> n;

    int a[n][n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }


    int max = INT32_MIN;
    int max_pos = 0;


    for (int i = 0; i < n; ++i) {
        int number = a[i][i];

        if(number > max){
            max = number;
            max_pos = i;
        }
    }


    cout << "Maximum element is: " << max << " with" << "\n"
    << "coordinates: " << max_pos+1 << ";" << max_pos+1 << "\n";

}
