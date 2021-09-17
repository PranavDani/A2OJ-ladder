
#include <iostream>
using namespace std;
int a[5][5];
int main()
{
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 3; j++)
            cin >> a[i][j];
    for (int i = 1; i <= 3; i++, cout << endl)
        for (int j = 1; j <= 3; j++)
            cout << 1 - ((a[i][j] + a[i + 1][j] + a[i - 1][j] + a[i][j - 1] + a[i][j + 1])) % 2;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a[3][3];
//     bool arr[3][3] = {
//         true,
//         true,
//         true,
//         true,
//         true,
//         true,
//         true,
//         true,
//         true,
//     };
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             // arr[i][j] = 1;
//             cin >> a[i][j];

//             if (a[i][j] > 0)
//             {
//                 for (int k = 0; k < a[i][j]; k++)
//                 {
//                     arr[i][j] = !arr[i][j];
//                     arr[i + 1][j] = !arr[i + 1][j];
//                     arr[i][j + 1] = !arr[i][j + 1];
//                     arr[i - 1][j] = !arr[i - 1][j];
//                     arr[i][j - 1] = !arr[i][j - 1];
//                 }
//             }
//         }
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << arr[i][j];
//         }
//         cout << endl;
//     }
//     // for (int i = 0; i < 3; i++)
//     // {

//     //     for (int j = 0; j < 3; j++)
//     //     {
//     //     }
//     // }
// }