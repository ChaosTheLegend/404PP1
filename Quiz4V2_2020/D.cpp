#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>
#include <set>
#include <queue>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[n][m];
    string t;
    getline(cin, t);

    for (int i = 0; i < n; ++i) {
        string s;
        getline(cin, s);
        for (int j = 0; j < m; ++j) {
            a[i][j] = s[j] - '0';
        }
    }

    deque<pair<int,int>> next_cells;

    int island_count = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {

            if(a[i][j] == 1) {
                island_count++;

                pair<int,int> cell;
                cell.first = i;
                cell.second = j;

                next_cells.push_back(cell);

                while(!next_cells.empty()){

                    int x = next_cells.front().first;
                    int y = next_cells.front().second;

                    next_cells.pop_front();

                    if(x-1 > 0 && a[x-1][y] == 1){
                        pair<int,int> coords;
                        coords.first = x-1;
                        coords.second = y;
                        if(find(next_cells.begin(), next_cells.end(),coords) == next_cells.end()) {
                            next_cells.push_back(coords);
                        }
                    }

                    if(y-1 >= 0 && a[x][y-1] == 1){
                        pair<int,int> coords;
                        coords.first = x;
                        coords.second = y-1;
                        if(find(next_cells.begin(), next_cells.end(),coords) == next_cells.end()) {
                            next_cells.push_back(coords);
                        }
                    }


                    if(y+1 < m && a[x][y+1] == 1){
                        pair<int,int> coords;
                        coords.first = x;
                        coords.second = y+1;
                        if(find(next_cells.begin(), next_cells.end(),coords) == next_cells.end()) {
                            next_cells.push_back(coords);
                        }
                    }

                    if(x+1 < n && a[x+1][y] == 1){
                        pair<int,int> coords;
                        coords.first = x+1;
                        coords.second = y;
                        if(find(next_cells.begin(), next_cells.end(),coords) == next_cells.end()) {
                            next_cells.push_back(coords);
                        }
                    }

                    a[x][y] = 0;
                }
            }
        }
    }

    cout << island_count << endl;
}