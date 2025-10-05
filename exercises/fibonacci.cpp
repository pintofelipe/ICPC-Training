#include <iostream>
using namespace std;

//0 1 1 2 3 5 8 13 21 44 65 99
long fibonacci(int n){
    if ( n == 0 || n == 1){
        return n;
        
    }else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}


int main()
{
    cout << fibonacci(8);

    return 0;
}
