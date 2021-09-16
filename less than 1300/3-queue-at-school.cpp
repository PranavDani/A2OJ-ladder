#include <iostream>

using namespace std;

int main()
{
    int n = 0, t = 0;
    cin >> n >> t;
    char ch[n];
    cin >> ch;
    char temp;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ch[j] == 'B' && ch[j + 1] == 'G')
            {
                temp = ch[j + 1];
                ch[j + 1] = ch[j];
                ch[j] = temp;
                j = j + 1;
            }
        }
    }
    cout << ch;

    return 0;
}