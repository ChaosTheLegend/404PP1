#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>

using namespace std;


int main() {

    map<string, int> students;

    int n;
    cin >> n;

    int total = 0;

    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        for (int j = 0; j < k; ++j) {
            string city;
            int c;
            cin >> city >> c;
            if(students.find(city) == students.end()){
                students[city] = c;
            }
            else{
                students[city] += c;
            }

            total += c;
        }
    }



    for (map<string, int> :: iterator it = students.begin(); it != students.end(); ++it) {
        float percent = (float(it->second)/float(total)*100);

        cout << it->first << " " << percent << "\n";
    }
}



