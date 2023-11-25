#include <string>
#include <iostream>
#include <stack>

using namespace std;



int main() {
    stack<int> a;



    a.push(5);
    a.push(3);
    a.push(2);
    a.push(7);

    a.pop();


    while (!a.empty()) {
        cout << a.top() << " ";
        a.pop();
    }

}
