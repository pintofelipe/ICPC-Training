#include <iostream>
#include <string>

using namespace std;



int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n;

    cin>>n;

    int total = 0;

    string word;

    for(int i=0; i<n; i++){
        cin>>word;

        if(word == "X++" || word == "++X"){
            total++;
        }else{
            total--;
        }
    }
    
    cout<<total<<'\n';


    return 0;
}