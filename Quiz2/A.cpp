#include <iostream>

using namespace std;


int main() {

    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i< n;i++){
        cin >> a[i];
    }

    //сумма в каждой руке
    int leftsum = 0;
    int rightsum = 0;

    //кол-во в каждой руке
    int leftcount = 0;
    int rightcount = 0;

    for(int i =0;i< n;i++){
        if(a[i]%2 == 0){
            leftsum += a[i];
            leftcount++;
        }
        else{
            rightsum+= a[i];
           rightcount++;
        };
    }









    int leftpower = leftsum * leftcount;
    int rightpower = rightsum * rightcount;

    cout << "Left hand magic power: " << leftpower << endl;
    cout << "Right hand magic power: " << rightpower << endl;



    return 0;
}
