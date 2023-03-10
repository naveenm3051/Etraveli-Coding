#include <bits/stdc++.h>
using namespace std;

int checkp(string str)
{
    int len = str.size();
    int count = 0;
    for (int i = 0; i < str.size() / 2; i++)
    {
        if (str[i] == str[len - i - 1])
        {
            cout << str[i] << " " << str[len - i - 1] << endl;
            count++;
        }
        else
        {
            break;
        }
    }
    cout << count << endl;
    cout << len / 2;
    if (len % 2 == 0 && count == ((len / 2) + 1))
    {
        return 1;
    }
    else if (count == len / 2)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int x = checkp(str);
        if (x == 1)
        {
            cout << "It is a palindrome" << endl;
        }
        else
        {
            cout << "it is not a palindrome!" << endl;
        }
    }
    return 0;
}