#include <iostream>
#include <string>

using namespace std;


#define forn(i,n) for(int i=0; i<int(n); i++)
#define dforn(i,n) for(int i=int(n) - 1; i>=0; i--)

#define SIZE(c) int((c).size())


int main ()
{
    string s;
    cin >> s;

    dforn(i, SIZE(s))

    if (s[i-1] >= s[i])
    {
    
        cout<< i << "\n";
        return 0;
    }


    return 0;
}



























