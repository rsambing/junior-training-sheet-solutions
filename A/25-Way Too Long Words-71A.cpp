// https://codeforces.com/contest/71/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n; cin >> n;
    while(n--)
    {
        string s; cin >> s;
        int len = s.length();
        if (len > 10) cout << s[0] << len - 2 << s[len - 1] << endl;
        else cout << s << endl; 
    }
    return (0);
}
