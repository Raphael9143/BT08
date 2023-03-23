#include <iostream>
using namespace std;

char* reverse(char* str, int len);
void output(char* str, int len);

int main()
{
    int len; //chieu dai xau
    cin >> len;
    char* str = new char[len];
    for (int i=0; i<len; i++)
    {
        cin >> str[i];
    }
    char* res = reverse(str, len);
    output(res, len);
    return 0;
}


char* reverse(char* str, int len)
{
    char temp;
    for (int i=0; i<len/2; i++)
    {
        temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
    return str;
}

void output(char* str, int len)
{
    for (int i=0; i<len; i++)
    {
        cout << str[i];
    }
}
