#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;


void print_vector(vector<long long> &v){
    for (auto i = v.begin(); i != v.end(); ++i) {
        int a = *i;
        cout << a << " ";
    }
    cout << "\n";
}

void print_vector(vector<int> &v){
    for (auto i = v.begin(); i != v.end(); ++i) {
        int a = *i;
        cout << a << " ";
    }
    cout << "\n";
}

bool isEven(int a){
    return a%2 == 0;
}


int main() {
    string s, t;
    cin >> s >> t;

    int count = 0;
    int max_count = s.size();

    for (int i = 0; i < max_count; ++i) {
        if(s == t){
            cout << count;
            return 0;
        }


        rotate(s.begin(),s.end()-1, s.end());
        count ++;
    }


    cout << "Understandable have a nice day!";
}
