#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>

using namespace std;


int main() {

    deque<int> queue1;

    string s;
    getline(cin, s);

    for (string :: iterator it = s.begin(); it != s.end(); it++) {
        if(*it == '0') {
            queue1.push_back(0);
            continue;
        }

        if(*it == '1'){
            if(queue1.empty()){
                queue1.push_back(1);
                continue;
            }

            if(queue1.back() == 0){
                queue1.push_back(1);
            }
            else{
                queue1.pop_back();
            }
        }
    }

    for (deque<int> :: iterator it = queue1.begin(); it != queue1.end(); it++) {
        cout << *it;
    }
}
