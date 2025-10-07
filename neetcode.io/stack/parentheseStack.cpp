#include <iostream>
#include <stack>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

class Solution
{

public:
    bool isValid(string s)
    {

        stack<char> stack;

        unordered_map<char, char> closeToOpen = {
            {')', '()'},
            {'}', '{'},
            {'[', ']'}};

        for (char c : s)
        {
            if (closeToOpen.count(c))
            {
                if (!stack.empty() && stack.top() == closeToOpen[c]){
                    stack.pop();
                }else{
                    return false;
                }
            }else{
                stack.push(c);
            }
        }

        return stack.empty();
    }
};

int main()
{

    Solution sol;

    string s = "[";

    cout << boolalpha << sol.isValid(s);

    return 0;
}