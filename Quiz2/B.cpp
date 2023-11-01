#include <iostream>

using namespace std;


int main() {

    int w,h;
    cin >> w >> h;

    bool a[w][h];

    for (int i = 0;i<w;i++){
        for (int j = 0;j<h;j++){
            a[i][j] = false;
        }
    }

    int n;
    cin >> n;

    for (int i = 0;i<n;i++){
        int x1,x2,y1,y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for (int x = x1;x<x2;x++){

            for (int y = y1;y<y2;y++){
                a[x][y] = true;
            }
        }
    }

    int totalArea = 0;

    for (int i = 0;i<w;i++){
        for (int j = 0;j<h;j++){

            if (a[i][j] == false){
                totalArea++;
            }

        }
    }


    cout << totalArea;


    return 0;
}
