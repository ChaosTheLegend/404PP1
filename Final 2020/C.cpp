#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <stack>

using namespace std;

int main() {
    int n;
    cin >> n;
    stack<int> st;

    for (int i = 0; i < n; ++i) {

        int a;
        cin >> a;

        if(st.empty()) {
            st.push(a);
            continue;
        }

        while (!st.empty() && st.top() <= a){
            st.pop();
        }

        st.push(a);
    }

    cout << st.size();
}
