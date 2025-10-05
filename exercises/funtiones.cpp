#include <iostream>

using namespace std;

auto multiplicarNumber(int number) -> int{

    return number * 2;
}

int main()
{

    int number;
    cin>>number;

    cout<<multiplicarNumber(number);


    return 0;
}


