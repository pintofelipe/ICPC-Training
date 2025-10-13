#include <iostream>
#include <map>

using namespace std;


bool isDrapalinpome(string word){
    map<char, int> freq;

    for(char c: word){
        freq[c]++;
    }


    int oddCount = 0;

    for(auto p: freq){
        if(p.second % 2 == 1){
            oddCount++;
        }
    }

    return oddCount <= 1;
}

int main()
{

    string word;
    cin>>word;



    if(isDrapalinpome(word)){
        cout<< "yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }

}