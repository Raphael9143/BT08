#include <iostream>
using namespace std;

char* pad_left(char* str, int len, int n);

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
    char* res = pad_left(str, len, n);
    for (int i=0; i<n; i++)
    {
        cout << res[i];
    }
    delete res;
    delete str;
    return 0;
}

char* pad_left(char* str, int len, int n)
{
    char* res = new char[n];
    for (int i=0; i<n-len; i++)
    {
        res[i] = ' ';
    }
    for (int i=n-len; i<n; i++)
    {
        res[i] = str[i-n+len];
    }
    return res;
}
