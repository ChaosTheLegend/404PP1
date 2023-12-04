#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>
#include <queue>

using namespace std;

void print_deque(deque<int>& dq){
    for (auto i = dq.begin(); i != dq.end(); ++i) {
        cout << *i << " ";
    }
    cout << endl;
}


int main() {

    deque<int> dq;

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string cmd;
        cin >> cmd;
        if(cmd == "push"){
            int input;
            cin >> input;

            dq.push_back(input);

            print_deque(dq);

            continue;
        }

        if(cmd == "pop"){
            dq.pop_front();

            print_deque(dq);
        }
    }



}
