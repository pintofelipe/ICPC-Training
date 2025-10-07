#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {

        stack<char> st;

        for (char c : s)
        {
            if (c == '(' || c == '{' || c == '[')
            {
                st.push(c);
            }

            else
            {
                if (st.empty()) return false; // no hay que cerrar

                char top = st.top();
                st.pop();


                if((c== ')' && top != '(')||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')){
                    return false;
                }
            }
        }

        return st.empty();
    }
};

int main()
{

    Solution sol;

    string s = "[(])";

    bool result = sol.isValid(s);
    cout << boolalpha << sol.isValid(s);  // true


    return 0;
}