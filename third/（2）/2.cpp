#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string swapCase(const string& s)
{
    string s_1;
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        if (s[i] >= 'A' && s[i] <= 'Z')
            s_1 += (char)tolower(ch);
        else if (s[i] >= 'a' && s[i] <= 'z')
            s_1 += (char)toupper(ch);
        else
            s_1 += ch;
    }
    return s_1;
}

int main()
{
    string s;
    getline(cin, s);
    string s1 = swapCase(s);
    cout << s1;
    return 0;
}