#include <iostream>
#include <cmath>

using namespace std;


int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }

    int max = -1;
    int max2 = -1;

    for (int i = 0; i < n;i++){
        if(a[i] > max){

            max2 = max;

            max = a[i];
        }
        else if(a[i] > max2){
            max2 = a[i];
        }
    }

    cout << max * max2 << endl;

}
