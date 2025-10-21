#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isPalindrome(string s)
{

    string newWord = "";

    for (char c : s)
    {
        if (isalnum(c))
        {
            newWord += tolower(c);
        }
    }

    return newWord == string(newWord.rbegin(), newWord.rend());
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    string word;

    while (true)
    {
       

        getline(cin, word);

         if (word == "*"){

            break;
        }

        if (isPalindrome(word))
        {
            cout << "Y"<<"\n";
        }
        else
        {

            cout << "N"<<"\n";
        }
    }

    return 0;
}
