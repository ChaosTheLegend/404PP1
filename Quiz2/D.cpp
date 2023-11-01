#include <iostream>

using namespace std;


int main() {
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }


    int count[1001];

    for (int i = 0; i < 1001; ++i) {
        count[i] = 0;
    }

    for (int i = 0; i < n; ++i) {
        int number = a[i];

        count[number] +=1;
    }

    int max = -1;

    for (int i = 0; i < 1001; ++i) {
        if(count[i] > max){
            max = count[i];
        }
    }

    for (int i = 1000; i >= 0; i--) {
        if(count[i] == max){
            cout << i << " ";
        }
    }


}
