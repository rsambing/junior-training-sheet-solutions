// http://codeforces.com/contest/112/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    std::string a, b; cin >> a >> b;
    int suma = 0, sumb = 0, len = a.length();
    for (int i = 0; i < len; i++)
    {
        a[i] = towlower(a[i]);
        b[i] = towlower(b[i]);
    }
    if (a > b)
        cout << 1 << endl;
    else if (b > a)
        cout << -1 << endl;
    else
        cout << 0 << endl;
    return (0);
}
