#include <iostream>
#include <string>

using namespace std;


int main() {

    int n;

    cin >> n;

    int sum = 0;

    for(int i=0;i<n;i++){
        int numb;
        cin >> numb;

        sum += numb;
    }


    cout << sum;




}
