#include <iostream>
using namespace std;

void delete_from(char* str, int len, int position);

char* delete_char(char* str, int len, char c);

int main()
{
    int len;
    cin >> len;
    char *str = new char[len];
    for (int i=0; i<len; i++)
    {
        cin >> str[i];
    }
    char c;
    cin >> c;
    char* res = delete_char(str, len, c);
    len = sizeof(res)/sizeof(char);
    for (int i=0; i<len; i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}

void delete_from(char* str, int len, int position)
{
    for (int i=position; i<len; i++)
    {
        str[i] = str[i+1];
    }
}

char* delete_char(char* str, int len, char c)
{
    for (int i=0; i<len; i++)
    {
        if (str[i] == c)
        {
            delete_from(str, len, i);
            len--;
        }
    }
    return str;
}
