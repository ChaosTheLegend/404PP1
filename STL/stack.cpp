#include <iostream>
#include <algorithm>
#include <set>
#include <stack>

using namespace std;


int main() {
    stack<int> st;

    st.push(4);
    st.push(3);
    st.push(2);


    while (!st.empty()){
        cout  << st.top() << " ";
        st.pop();
    }

}
