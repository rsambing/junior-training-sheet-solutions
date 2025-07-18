// https://codeforces.com/contest/265/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string s, t; cin >> s >> t;
    int ans = 1, i = 0, j = 0;

    while(s[i] && t[j]) (s[i] == t[j] ? (ans++, i++, j++) : j++);
    cout << ans << endl;
    return (0);
}
