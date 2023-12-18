#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>
#include <set>

using namespace std;

int main() {
    map<int,int> m;

    for (int i = 1; i <= 9; ++i) {
        m[i] = 0;
    }


    int a;
    do{
        cin >> a;

        if(a == 0) break;

        m[a]++;

    }while(a != 0);

    for (auto it = m.begin(); it != m.end() ; ++it) {
        cout << it->second << " ";
    }

}