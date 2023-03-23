#include <iostream>
using namespace std;

void trim_left(char str[], int len);

int main()
{
    int len = 10;
    char str[len] = {'h', 'e', 'l', 'l', 'o', ' ', ' ', ' ', ' ', ' '};
    trim_left(str, len);
    return 0;
}

void trim_left(char str[], int len)
{
    int i=0;
    char res[100];
    while (str[i] != ' ')
    {
        i++;
    }
    for (int j=0; j<len-i; j++)
    {
        res[j] = str[j];
    }
    for (int x=0; x<len-i; x++)
    {
        cout << res[x];
    }
}
