#include <iostream>

using namespace std;

int sign(int number)
{
    if (number < 0)
    {
        return number * -1;
    }
    else
    {
        return number;
    }
}

int main()
{
    int n = 5;
    int i = 0, j = 0, a[n][n], x = 0, y = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] != 0)
            {
                x = i;
                y = j;
            }
        }
    }
    int diffx = sign(x - 2);
    int diffy = sign(y - 2);

    cout << (diffx + diffy);
    return 0;
}