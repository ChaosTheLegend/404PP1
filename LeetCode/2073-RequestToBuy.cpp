#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pair<int,int>> q;
        int time = 0;

        for (int i = 0; i < tickets.size(); ++i) {
            pair<int, int> p;
            p.first = tickets[i];
            p.second = i;
            q.push(p);
        }

        while(true){

            pair<int, int> p;
            p = q.front();

            p.first--;
            time++;

            q.pop();

            if(p.first != 0){
                q.push(p);
            }
            else if(p.second == k){
                break;
            }
        }

        return time;
    }
};