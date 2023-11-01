#include <iostream>

using namespace std;


int main() {

    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int result[n];
    int k = 0;

    for (int i = 0; i < n;i++){
        if(a[i]%2 == 0){
            cout << a[i] << " ";
            //result[k] = a[i];
            //k++;
        }
    }

    for (int i = 0; i < n;i++){
        if(a[i]%2 == 1){

            cout << a[i] << " ";
            //k++;
        }
    }


//    for (int i =0;i<n;i++){
//        cout << result[i] << " ";
//    }


    return 0;
}
