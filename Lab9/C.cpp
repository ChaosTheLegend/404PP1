#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

void print_vector(vector<int> &v){
    for (auto i = v.begin(); i != v.end(); ++i) {
        int a = *i;

        cout << a << " ";
    }
}

int main() {

    map<int,int> count;

    //{1, 1}
    //{2, 2}
    //{5, 4}

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if(count.find(a) != count.end()){
            count[a]++;
        }
        else{
            count[a] = 1;
        }
    }

    int s = 0;

    for (auto i = count.begin(); i != count.end(); ++i) {
        if(i->second >= 2) s++;
    }

    cout << s;
}
