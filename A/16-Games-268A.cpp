// https://codeforces.com/contest/268/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int ans = 0, n; cin >> n;
    vector<int> a;
    unordered_map<int, int> mp;

    while(n--)
    {
        int first; cin >> first; a.push_back(first);
        int second; cin >> second; mp[second]++;
    }
    for(size_t i = 0; i < a.size(); i++) ans += mp[a[i]];
    cout << ans << endl;
    return (0);
}
