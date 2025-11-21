#include <iostream>
#include <cmath>



using namespace std;


int maxSubArray(vector<int>& nums){

    int maxEndingHere = nums[0];
    int maxSoFar = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        maxEndingHere = max(nums[i], maxEndingHere + nums[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);

    }
    
    return maxSoFar;

}



int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);


    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};

    nums = {1};

    int output = maxSubArray(nums);

    cout<<output<<"\n";


    return 0;
}



