// http://codeforces.com/contest/263/problem/A

#include <iostream>

using namespace std;

int main(void)
{
    char m[5][5];
    int ans = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> m[i][j];
            if (m[i][j] == '1')
            {
                cout << abs(i - 2) + abs(j - 2) << endl;
                return (0);
            }
        }
    }
    return (0);
}
