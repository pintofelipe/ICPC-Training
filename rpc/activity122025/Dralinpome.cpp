#include <iostream>
#include <string>
#include <vector>


using namespace std;

void isDralimpme()
{

    string s;
    cin>>s;

    vector<int> freq(26,0);


    for(char c: s){
        freq[c- 'a']++;
    }


    int odd_counts = 0;

    for(int count : freq){
        if(count % 2 !=0){
            odd_counts++;
        }
    }



    if(s.length() % 2 == 0){
        if(odd_counts == 0){
            cout<<"yes";
        }else{
            cout<<"no";
        }
    }else{
        if(odd_counts == 1){
            cout<<"yes";
        }else{
            cout<<"no";
        }
    }

}





int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    isDralimpme();


    return 0;
}