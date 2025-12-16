#include <bits/stdc++.h>

using namespace std;


int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    // [-1 2 4 -3 5 2 -5 2]

    //Algorithm 1

    int best = 0;

    vector array = {-1,2,4,-3,5,2,-5,2};

    int n = array.size();

    for (int a = 0; a <n; a++)
    {
        for (int b = a; b < n; b++)
        {
            int sum =0;

            for (int  k = a; k <=b; k++)
            {
                sum += array[k];
            }
            best =  max(best,sum);
        }
        
    }
    

    cout << best << "\n";




    
    return 0;
}