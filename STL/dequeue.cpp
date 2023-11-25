#include <string>
#include <iostream>
#include <stack>
#include <deque>

using namespace std;



int main() {
    deque<int> deq;

    deq.push_back(4);
    deq.push_back(3);
    deq.push_back(2);

    // {4 , 3 , 2}

    deq.push_front(1);





    deq.push_front(-10);

    deq.pop_back();
    deq.pop_front();

    for (auto i = deq.begin(); i != deq.end(); ++i) {
        cout << *i << " ";
    }

    cout << "\n";


}
