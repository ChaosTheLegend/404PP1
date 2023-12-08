#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>

using namespace std;


int main() {

    map<pair<int,int>, int> count;

    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        int a,b;
        cin >> a >> b;
        pair<int,int> p;
        if(a > b){
            p.first = a;
            p.second = b;
        }
        else{
            p.first = b;
            p.second = a;
        }

        if(count.find(p) == count.end()){
            cout << 0 << endl;
            count[p] = 1;
        }
        else{
            cout << count[p] << endl;
            count[p]++;
        }
    }
}



