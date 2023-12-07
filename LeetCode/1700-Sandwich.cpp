#include <string>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>

using namespace std;
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> student_queue;
        stack<int> sandwich_stack;

        for (int i = 0; i < students.size(); ++i) {
            int s = students[i];
            student_queue.push(s);
        }

        reverse(sandwiches.begin(), sandwiches.end());

        for (int i = 0; i < sandwiches.size(); ++i) {
            int s = sandwiches[i];
            sandwich_stack.push(s);
        }

        for (int i = 0; i < student_queue.size(); ++i) {
            int sand = sandwich_stack.top();
            int student = student_queue.front();

            if(sand == student){
                sandwich_stack.pop();
                student_queue.pop();
                i = -1;
                continue;
            }

            student_queue.pop();
            student_queue.push(student);
        }

        return student_queue.size();
    }
};

int main(){
    vector<int> std = {1,1,1};
    vector<int> snd = {0, 1 ,1};
    Solution* sol = new Solution();

    cout << sol->countStudents(std, snd);
}