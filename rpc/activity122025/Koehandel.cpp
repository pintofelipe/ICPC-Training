#include <iostream>


using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    long long c,n;

    cin>>c>>n;

    if(n>c){
        cout<<c+1<<endl;
    }else if(n==c){
        cout<<n<<endl;
    }else{
        cout<<0<<endl;
    }
    

    return 0;
}