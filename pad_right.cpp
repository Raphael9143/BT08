#include <iostream>
using namespace std;

char* pad_right(char* str, int len, int n);

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
    char* res = pad_right(str, len, n);
    for (int i=0; i<n; i++)
    {
        cout << res[i];
    }
    return 0;
}

char* pad_right(char* str, int len, int n)
{
    char* res = new char[n];
    for (int i=0; i<len; i++)
    {
        res[i] = str[i];
    }
    for (int i=len; i<n; i++)
    {
        res[i] = ' ';
    }
    return res;
}
