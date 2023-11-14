#include <string>
#include <iostream>

using namespace std;

double GetPriceQualityRatio(int price, int quality){

    return (double)quality/(double)price;
}

int FindMax(double* a, int n){

    double max = a[0];
    int max_index = 0;
    for (int i = 0; i < n; ++i) {
        if(a[i] > max) {
            max = a[i];
            max_index = i;
        }
    }

    return max_index;
}

int main() {

    int p, q;
    string s;
    int n;
    cin >> n;
    string phones[n];
    double ratios[n];
    for (int i = 0; i < n; ++i) {
        cin >> s >> p >> q;
        double ratio = GetPriceQualityRatio(p, q);
        phones[i] = s;
        ratios[i] = ratio;
    }

    int max = FindMax(ratios, n);

    cout << phones[max];

}
