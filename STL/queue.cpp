#include <string>
#include <iostream>
#include <stack>
#include <queue>

using namespace std;



int main() {
    queue<int> queue1;


    queue1.push(8);
    queue1.push(7);
    queue1.push(6);
    queue1.push(5);
    queue1.push(4);
    queue1.push(3);



    while (!queue1.empty()){
        cout  << queue1.front() << " ";
        queue1.pop();
    }
}
