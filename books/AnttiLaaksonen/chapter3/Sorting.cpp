#include <bits/stdc++.h>


using namespace std;


int main ()

{


    vector<int> v = {4,2,5,3,5,8,3};
    sort(v.begin(), v.end());

    for(auto n : v)
    {
        cout<<n<<" ";
    }

    cout<<"\n";
    sort(v.rbegin(),v.rend());
     for(auto n : v)
    {
        cout<<n<<" ";
    }


    int n =7; //array size
    int a[] = {4,2,5,3,5,8,3};
    sort(a,a+n);

    cout<<"\n";
    for(auto var : a)
    {
        cout<<var<<" ";
    }



    string s = "monkey";
    sort(s.begin(), s.end());
    
    cout<<"\n";

    cout<<s<<"\n";

    return 0;
}