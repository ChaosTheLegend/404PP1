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

    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if(count.find(a) == count.end()){
            count[a] = 1;
        }
        else{
            count[a]++;
        }
    }

    cout << count[k];
}
