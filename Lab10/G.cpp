#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main(){

    int n;

    cin >> n;

    map<pair<string, string>, int> teams;

    for (int i = 0; i < n; ++i) {
        string s1;
        int score1;
        string s2;
        int score2;
        cin >> s1 >> score1 >> s2 >> score2;
        string teamName = s1 + " and " + s2;
        string scores = to_string(score1) + " " + to_string(score2);
        pair<string, string> unique_team;
        unique_team.first = teamName;
        unique_team.second = scores;
        int teamScore = score1 + score2;

        teams[unique_team] = teamScore;
    }

    for (map<pair<string, string>, int> :: iterator it = teams.begin();
    it != teams.end(); ++it) {
        cout << (it->first).first << " " << it->second << endl;
    }
}