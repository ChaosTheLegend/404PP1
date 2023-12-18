#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>
#include <set>

using namespace std;

int count_pos(vector<int>& v){
    int count = 0;

    for (auto it = v.begin(); it != v.end() ; ++it) {
        if(*it > 0) count++;
    }

    return count;
}


int main() {

    int count[7];

    for (int i = 0; i < 7; ++i) {
        cin >> count[i];
    }

    int n;
    cin>> n;

    for (int i = 0; i < n; ++i) {
        int sum;
        cin >> sum;

        int temp[7];
        for (int j = 0; j < 7; ++j) {
            temp[j] = count[j];
        }


        bool valid = true;
        while (sum > 0){

            if(count[6] > 0 && sum >= 100){
                sum-=100;
                count[6]-=1;
                continue;
            }

            if(count[5] > 0 && sum >= 50){
                sum-=50;
                count[5]-=1;
                continue;
            }

            if(count[4] > 0 && sum >= 20){
                sum-=20;
                count[4]-=1;
                continue;
            }

            if(count[3] > 0 && sum >= 10){
                sum-=10;
                count[3]-=1;
                continue;
            }

            if(count[2] > 0 && sum >= 5){
                sum-=5;
                count[2]-=1;
                continue;
            }

            if(count[1] > 0 && sum >= 2){
                sum-=2;
                count[1]-=1;
                continue;
            }

            if(count[0] > 0 && sum >= 1){
                sum-=1;
                count[0]-=1;
                continue;
            }

            if(count[0] == 0 && sum > 0){
                valid = false;
                break;
            }
        }

        if(valid) cout << "Transaction accepted!" << endl;
        else {
            for (int j = 0; j < 7; ++j) {
                count[j] = temp[j];
            }
            cout << "Transaction stopped!" << endl;
        }
    }
}