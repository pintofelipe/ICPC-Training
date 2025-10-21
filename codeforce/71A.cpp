#include <iostream>
#include <string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    string s;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>s;

        if((int)s.size() > 10){
            cout << s.front() << (s.size()-2)<<s.back()<<'\n';
        }else{
            cout<<s<<'\n';
        }
    }
    


    return 0;
}