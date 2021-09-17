#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{

    string str;
    cin >> str;
    int n = str.length();
    char ch[n];
    strcpy(ch, str.c_str());
    string out;

    for (int i = 0; i < n; i++)
    {
        if (ch[i] == '.')
        {
            out = out.append(to_string(0));
        }
        else if (ch[i] == '-')
        {
            if (ch[i + 1] == '.')
            {
                out = out.append(to_string(1));
                i++;
            }
            else if (ch[i + 1] == '-')
            {
                out = out.append(to_string(2));
                i++;
            }
        }
    }
    cout << out;

    return 0;
}