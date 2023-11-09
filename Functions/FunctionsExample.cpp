#include <string>
#include <iostream>

using namespace std;




void PrintHello(){
    cout << "Hello" << endl;
    cout << "Hello" << endl;
    cout << "Hello" << endl;
}

void PrintNumberWithText(int n, string text){
    cout << text << " " << n << endl;
}

void PrintMult(int x, int y){
    cout << x*y << endl;
}


void PrintSquare(int x){
    cout << x*x << endl;
}


int main() {

    int n;
    cin >> n;

    PrintNumberWithText(n, "typed number:");

    n+= 10;

    //

    PrintNumberWithText(n, "n + 10 =");



    n*= 10;

    //

    PrintNumberWithText(n, "n * 10 =");

    PrintMult(n, 5);

    cout << n;

}
