#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {

        unordered_map<int, int> count;

        for (int num : nums)
        {
            count[num]++;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> heap;


        for(auto& entry: count){
            heap.push({entry.second}, entry.first});
            if(heap.size() > k){
                heap.pop();
            }
        }

    }
};

int main()
{
    Solution s;

    vector<int> nums = {1, 2, 2, 3, 3, 3};

    s.topKFrequent(nums, 2);

    return 0;
}
