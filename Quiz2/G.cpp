#include <iostream>
#include <cmath>

using namespace std;


int main() {

    int n, m, dir;
    cin >> n >> m >> dir;

    if(dir == 1){
        for (int i = sqrt(n); i * i <= m; i++){
            cout << i*i << " ";
        }

    }
    else if(dir == -1) {
        for (int i = sqrt(m); i >= sqrt(n); i--){
            cout << i*i << " ";
        }
    }
}
