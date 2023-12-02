#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>

using namespace std;


int main() {

    map<string, int> counter;

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string temp;
        cin >> temp;

        if(counter.find(temp) == counter.end()){
            counter[temp] = 1;
        }
        else{
            counter[temp]++;
        }
    }

    int sum = 0;

    for (auto it = counter.begin(); it != counter.end(); ++it) {
        if(it->second == 3) sum++;
    }


    int sum2 = count_if(counter.begin(), counter.end(),
                        [](pair<string, int> p){
                            return (p.second == 3);
    });

    cout << sum2;


}
