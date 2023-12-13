#include<iostream>
#include<string>
using namespace std;

bool ispalin(string str)
{
    int i = 0, j = str.length() - 1;
    while (i < j)
    {
        if (str[i] != str[j]) return false;
        i++, j--;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int i = 0, len = str.length();
        int ans = -1;
        while (i < len) i++;
        if (i < len)
        {
            string str1 = str.substr(0, i) + str.substr(i + 1, str.length() - i - 1);
            if (ispalin(str1)) ans = i;
        }
        cout << ans << endl;
    }
    return 0;
}
