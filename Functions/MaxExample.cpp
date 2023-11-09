#include <iostream>
#include <string>

using namespace std;


int beer = 10;


string addA(string a){

    beer += 10;

    cout << a << endl;

    a.append("A");
    cout << a << endl;


    return a;
}


int FindMax(int* a, int n){
    int max = INT_MIN;


    beer -= 10;

    for (int i = 0; i < n; ++i) {
        if(a[i] > max) max = a[i];
    }

    return max;
}


int main() {

    string s = "hello world";



    beer /= 10;

    s = addA(s);



    cout << s;

}


