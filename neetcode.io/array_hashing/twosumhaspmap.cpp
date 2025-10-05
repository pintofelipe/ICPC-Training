// Input:
// nums = [3,9,5,6,4], target = 7

// Output: [0,4]

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        unordered_map<int, int> map;


        for (int i = 0; i < nums.size(); i++)
        {
            int current_number = nums[i];
            int complement = target - current_number;

            if(map.count(complement))
                return {map[complement],i};

            map[current_number] = i;

        }

        return {};
        
        
        
    }

};


int main()
{
    Solution sol;
    vector<int> nums = {3, 9, 5, 6,4};
    int tarjet = 7;

    vector<int> result = sol.twoSum(nums, tarjet);

    if (!result.empty())
    {
        cout << "Los índices son: [" << result[0] << ", " << result[1] << "]" << endl;
    }else{
        cout<<"No se encontraron numbers";
    }

    return 0;
}
