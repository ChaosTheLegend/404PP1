#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>
#include <set>

using namespace std;


int to_upper_cost(string s, int price){
    int total_cost = 0;

    for (int i = 0; i < s.size(); ++i) {
        if(s[i] >= 'a' && s[i] <= 'z'){
            total_cost += price;
        }
    }

    return total_cost;
}

int to_lower_cost(string s, int price){
    int total_cost = 0;

    for (int i = 0; i < s.size(); ++i) {
        if(s[i] >= 'A' && s[i] <= 'Z'){
            total_cost += price;
        }
    }

    return total_cost;
}

int main() {

    int n, to_l, to_u;
    cin >> n >> to_l >> to_u;

    string s;
    cin >> s;

    int to_upper_c = to_upper_cost(s, to_u);
    int to_lower_c = to_lower_cost(s, to_l);

    int lower = to_upper_c < to_lower_c ? to_upper_c : to_lower_c;

    cout << lower;
}