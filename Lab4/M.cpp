#include <iostream>
#include <string>

using namespace std;


int main() {

    int n;
    cin >> n;

    int arr[n][n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            arr[i][j] = 0;
        }
    }

    int x = 0;
    int y = 0;
    int dir = 0;
    int count = 1;

    while (count < n*n){

        if(dir == 0){
            if(x+1 >= n || arr[x+1][y] != 0){
                dir+=1;
                continue;
            }
        }

        if(dir == 1){
            if(y+1 >= n || arr[x][y+1] != 0){
                dir+=1;
                continue;
            }
        }

        if(dir == 2){
            if(x-1 < 0 || arr[x-1][y] != 0){
                dir+=1;
                continue;
            }
        }

        if(dir == 3){
            if(y-1 < 0 || arr[x][y-1] != 0){
                dir+=1;
                dir%=4;
                continue;
            }
        }

        arr[x][y] = count;
        count++;

        if(dir == 0) x++;
        if(dir == 1) y++;
        if(dir == 2) x--;
        if(dir == 3) y--;
    }

    arr[x][y] = count;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}
