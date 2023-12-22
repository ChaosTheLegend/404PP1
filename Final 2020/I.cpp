#include <iostream>
#include <string>
#include <map>
#include <set>


using namespace std;


int main() {

    string a;
    string b;

    cin >> a >> b;

    if(a.find(b) != -1){
        cout << a;
        return 0;
    }

    if(b.find(a) != -1){
        cout << b;
        return 0;
    }

    int a_size = a.size();
    int b_size = b.size();

    int min_size = a_size;
    if(b_size < a_size) min_size = b_size;
    int n = min_size;

    string ans = "";

    for (int i = 0; i < min_size; ++i) {

        string a_sub = a.substr(a.size()-i-1, i+1);
        string b_sub = b.substr(0, i+1);



        if(a_sub == b_sub){
            ans = a + b.substr(i+1, b.size());
        }
    }

    string ans2 = "";

    for (int i = 0; i < min_size; ++i) {

        string b_sub = b.substr(b.size()-i-1, i+1);
        string a_sub = a.substr(0, i+1);

        if(a_sub == b_sub){
            ans2 = b + a.substr(i+1, b.size());
        }
    }


    if(ans == "" && ans2 == ""){
        cout << a + b;
    }
    else if(ans == "") {
        cout << ans2;
    }
    else if(ans2 == ""){
        cout << ans;
    }
    else{
        if(ans.size() < ans2.size()) cout << ans;
        else cout << ans2;
    }



}
