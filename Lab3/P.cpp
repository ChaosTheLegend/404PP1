#include <iostream>
#include <string>

using namespace std;


int main() {

    //Input
    int n;
    cin >> n;


    for (int i = 1; i*i <= n; ++i) {
        if(i*i == n){
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
}
