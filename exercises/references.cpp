#include <iostream>
using namespace std;

void swapValores(int &a, int &b)
{
    // a = 7
    // b = 10
    // b= b+a; 7 + 10
    //a = b-a; 17 - 7
    // b = b-a; 17 - 10

    b = a+b;
    a = b-a;
    b = b-a;
}

int main()
{
    int x = 7, y = 5;
    cout << x << " " << y << "\n";
    swapValores(x, y);
    cout << x << " " << y << "\n";
}