#include <iostream>
#include <string>
#include <cstring>

using namespace std;

bool isDistinct(int number)
{
    string str = to_string(number);

    int n = str.length();
    char ch[n];
    strcpy(ch, str.c_str());
    int og = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ch[i] == ch[j])
            {
                og = 1;
            }
        }
    }
    if (og == 1) //ch[0] != ch[1] && ch[0] != ch[2] && ch[0] != ch[3] && ch[2] != ch[3]
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{

    int n, i;
    cin >> n;
    i = n + 1;

    while (!isDistinct(i))
    {
        if (isDistinct(i) == 1)
        {
            break;
        }
        i++;
    }

    cout << i;

    return 0;
}