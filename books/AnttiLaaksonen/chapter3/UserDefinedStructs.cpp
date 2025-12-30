#include <bits/stdc++.h>

using namespace std;

bool comp(string a, string b){
 

    if(a.size() != b.size()) return a.size() < b.size();
    return a < b;

}




struct P {
    int x, y;
    bool operator <(const P &p){
        if (x != p.x) return x < p.x;
        else return y < p.y;
    }
};



int main (){

    ios::sync_with_stdio(0);
    cin.tie(0);

    //Example string
    vector<string> v = {"apple","cat","banana","dog"};
    sort(v.begin(),v.end(), comp);// ordena por largo, luego lexicograficamente

    //Example wiht struct
    vector<P> pts = {{2,3},{1,5},{2,1}};

    sort(pts.begin(), pts.end());

    //show result
    for(auto &s: v) cout<< s << ' '<<"\n";
    for(auto &p: pts) cout<< '(' << p.x << ',' <<p.y<< ') '<<"\n";



    return 0;
}



