#include <iostream>
#include <string>

using namespace std;


int main() {

    //Input
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    //Bubble sort
    for (int i = 0; i < n; ++i) {

        for (int j = 1; j < n; ++j) {
            if(a[j-1] > a[j]){
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }

    }


    //Напечатать в обратном порядке
    for (int i = n-1; i >= 0; i--) {
        cout << a[i] << " ";
    }
}