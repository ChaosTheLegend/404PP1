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

void print_sum(deque<int>& dq, int l, int r){
    int sum = 0;
    for (auto i = dq.begin()+l; i != dq.begin()+r+1; ++i) {
        sum+= *i;
    }
    cout << sum;
}

int main() {

    deque<int> dq;

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string cmd;
        cin >> cmd;
        if(cmd == "push_back"){
            int input;
            cin >> input;
            dq.push_back(input);
            continue;
        }

        if(cmd == "push_front"){
            int input;
            cin >> input;
            dq.push_front(input);
            continue;
        }

        if(cmd == "pop_back"){
            dq.pop_back();
            continue;
        }

        if(cmd == "pop_front"){
            dq.pop_front();
            continue;
        }

        if(cmd == "sum"){
            int l, r;
            cin >> l >> r;
            print_sum(dq, l, r);
        }
    }



}
