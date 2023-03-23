#include <iostream>
using namespace std;

bool is_palindrome(char*str, int len);

int main()
{
    int len;
    cin >> len;
    char* str = new char[len];
    for (int i=0; i<len; i++)
    {
        cin >> str[i];
    }
    if (is_palindrome(str, len))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}

bool is_palindrome(char* str, int len)
{
    for (int i=0; i<len/2; i++)
    {
        if (str[i] != str[len-1-i])
            return false;
    }
    return true;
}
