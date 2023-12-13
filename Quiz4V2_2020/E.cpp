#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>
#include <set>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<pair<pair<int,int>,int>> calendar;

    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        string day = s.substr(0, 2);
        string month = s.substr(3,2);
        string year = s.substr(6,4);

        pair<pair<int,int>,int> entry;

        pair<int,int> day_month;

        day_month.first = stoi(day);
        day_month.second = stoi(month);
        entry.first = day_month;
        entry.second = stoi(year);

        calendar.push_back(entry);
    }

    sort(calendar.begin(), calendar.end(),
         [](pair<pair<int,int>,int> a, pair<pair<int,int>,int> b){
        int a_day = a.first.first;
        int b_day = b.first.first;
        int a_month = a.first.second;
        int b_month = b.first.second;
        int a_year = a.second;
        int b_year = b.second;

        if(a_year != b_year) return a_year < b_year;
        if(a_month != b_month) return a_month < b_month;
        return a_day < b_day;
    });

    for (vector<pair<pair<int,int>,int>> :: iterator it = calendar.begin();
         it != calendar.end(); it++){

        string day;
        if(it->first.first < 10) day = "0"+ to_string(it->first.first);
        else day = to_string(it->first.first);

        string month;
        if(it->first.second < 10) month = "0"+ to_string(it->first.second);
        else month = to_string(it->first.second);

        cout << day << "-" << month << "-" << it->second << "\n";
    }



}