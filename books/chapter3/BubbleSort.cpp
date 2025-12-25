#include <bits/stdc++.h>


using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);


    //Sorting

    /*Given an array that contains n elements, your task is to sort the
    elements in increasing order*/

    //1 3 8 2 9 2 5 6
    //1 2 2 3 5 6 8 9

    int array[8] = {1,3,8,2,9,2,5,6};
    int n = size(array);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if(array[j] > array[j+1]){
                swap(array[j], array[j+1]);
            }
        }
        
    }
    


    return 0;
}