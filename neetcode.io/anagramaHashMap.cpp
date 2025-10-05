#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
            return false;

        unordered_map<char, int> countS;
        unordered_map<char, int> countT;

        for (int i = 0; i < s.length(); i++)
        {
            countS[s[i]]++;
            countT[t[i]]++;
        }

        return countS == countT;
        
    }
};

int main()
{

    Solution sol;

    string s = "racecar";
    string t = "carrace";

    bool result = sol.isAnagram(s, t);
    cout << (result ? "Es un anagrama " : "No es un anagrama") << "\n";

    return 0;
}