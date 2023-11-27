#include <vector>
#include <string>
#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;

        for (auto it = operations.begin(); it != operations.end();
        ++it){

            if(*it == "C"){
                st.pop();
                continue;
            }

            if(*it == "D"){
                int db = st.top() * 2;
                st.push(db);
                continue;
            }

            if(*it == "+"){

                //{5, 10, 15}

                int a = st.top();
                st.pop();
                int b = st.top();
                int sum = a+b;
                st.push(a);
                st.push(sum);

                continue;
            }

            int a = stoi(*it);

            st.push(a);
        }

        int sum = 0;

        while(!st.empty()){
            sum += st.top();
            st.pop();
        }

        return sum;
    }
};



int main(){
    vector<string> v = {"5","2","C","D","+"};

    Solution* s = new Solution();

    cout << s->calPoints(v);
}