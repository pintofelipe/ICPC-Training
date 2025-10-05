#include <iostream>

using namespace std;

// S(n) = S(n-1) + n

long sumarNInt(int n){
    if(n==1){
        return 1;
    }else{
        return n + sumarNInt(n-1);
    }
}


int main()
{
    cout<<sumarNInt(8)<<"\n";
    return 0;
}


