#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

float calculateGP(int points){
    if(points < 50) return 0;

    int over50 = points - 50;
    int steps = over50 / 5;

    return 1.0 + float(steps) * 1.0 / 3.0;
}

int main(){

    int n;

    cin >> n;


    float totalGP = 0;
    int totalCredits = 0;
    for (int i = 0; i < n; ++i) {
        int a1, a2, f, cr;
        cin >> a1 >> a2 >> f >> cr;


        float gp = calculateGP(a1+a2+f);
        if(a1+a2 < 30) gp = 0.0;
        if(f < 20) gp = 0.0;

        float subtotal = gp * cr;

        totalCredits += cr;
        totalGP += subtotal;
    }

    cout << totalGP/float(totalCredits);

}