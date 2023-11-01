#include <iostream>
#include <cmath>

using namespace std;


int main() {

    double a, b;

    cin >> a >> b;

    double power = b/a;
    double log = log2(power);
    double intLog = (int)log;

    if(log == intLog){
        cout << "YES" <<  " " << intLog << endl;
    }
    else{
        cout << "NO" << endl;
    }

}
