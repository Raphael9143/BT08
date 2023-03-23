#include <iostream>
using namespace std;

char* truncate(char* str, int len, int n);

int main()
{
    int len;
    cin >> len;
    char* str = new char[len];
    for (int i=0; i<len; i++)
    {
        cin >> str[i];
    }
    int n;
    cin >> n;
    if (n < len)
        str = truncate(str, len, n);
    for (int i=0; i<n; i++)
    {
        cout << str[i];
    }
    return 0;
}

char* truncate(char* str, int len, int n)
{
    char* res = new char[n];
    for (int i=0; i<n; i++)
    {
        res[i] = str[i];
    }
    return res;
}
