
#include <iostream>
#include <string>

//ABEDCCCABCDE

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);



    string s;
    cin >> s;

    for(int i = int(s.size() - 1); i>=0; i--){
        

        if(s[i-1] >= s[i]){
            cout<<i;
            return 0;
        }
    }



    return 0;
}