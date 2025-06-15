// http://codeforces.com/contest/731/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string s; cin >> s;
    int ans = 0;
    char now = 'a';

    for(char &c : s)
    {
        int distance = abs(now - c);
        ans += min(distance, 26 - distance);
        now = c;
    }
    cout << ans << endl;
    return (0);
}
