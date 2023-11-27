#include <vector>
#include <string>
#include <iostream>
#include <stack>
#include <map>

using namespace std;


class Solution {
public:
    int romanToInt(string s) {
        map<char, int> roman = {
                {'I', 1},
                {'V', 5},
                {'X', 10},
                {'L', 50},
                {'C', 100},
                {'D', 500},
                {'M', 1000}
        };

        int sum = 0;

        int prev_num = 0;

        for (char c : s) {

            int num = roman[c];


            if(prev_num == 1 && (num == 5 || num == 10)){
                sum += num;
                sum -= 1;
                sum -= 1;
                prev_num = num;
                continue;
            }

            if(prev_num == 10 && (num == 50 || num == 100)){
                sum += num;
                sum -= 10;
                sum -= 10;
                prev_num = num;
                continue;
            }

            if(prev_num == 100 && (num == 500 || num == 1000)){
                sum += num;
                sum -= 100;
                sum -= 100;
                prev_num = num;
                continue;
            }

            sum += roman[c];

            prev_num = num;
        }

        return sum;
    }
};


int main(){
    string s = "MCMXCIV";
    //1
    //11
    //-1, -1, 9
    Solution* sol = new Solution();

    cout << sol->romanToInt(s);
}