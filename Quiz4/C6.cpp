#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>
#include <set>

using namespace std;

int main() {

    int a;
    deque<int> deq;

    do{
        cin >> a;
        deq.push_back(a);
    } while (a!= 0);

    deq.pop_back();


    sort(deq.begin(), deq.end());

    int max_sum = INT32_MIN;

    while (!deq.empty()){
        int a = deq.front();
        int b = deq.back();
        int sum = a+b;
        deq.pop_back();
        deq.pop_front();

        if(sum > max_sum) max_sum = sum;
    }

    cout << max_sum;



}