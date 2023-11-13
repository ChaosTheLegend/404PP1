#include <string>
#include <iostream>

using namespace std;


int main() {

    string s1 = "Hello world";

    string world = s1.substr(2, 5);

    cout << world;



    /*
    if(s1.length() != s2.len1gth()){
        cout << "NO";
        return 0;
    }

    for (int i = 0; i < s1.length(); ++i) {
        if(s1[i] != s2[i]){
            cout << "NO";
            return 0;
        }
    }
    */
    //cout << "YES";
}
