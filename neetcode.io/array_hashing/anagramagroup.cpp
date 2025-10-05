#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs){

        unordered_map<string, vector<string>> mp;


        for (string s: strs)
        {
            string key = s;

            sort(key.begin(), key.end());
            
            mp[key].push_back(s);

        }
        

        vector<vector<string>> result;

        for(auto &pair: mp){
            result.push_back(pair.second);
        }

        return result;


    }
};

int main()
{
    Solution sol;

    vector<string> strs = {"act","pots","tops","cat","stop","hat"}; 
    

    vector<vector<string>> result =
    sol.groupAnagrams(strs);

    cout<< "[";
    for(auto &group: result){
        cout<< "[";
        for (int i = 0; i < group.size(); i++)
        {
            cout<< "\""<< group[i] << "\"";
            if(i < group.size() - 1) cout << ", ";
        }
        cout<<"]";
    }
    cout<<"]";


    return 0;
}