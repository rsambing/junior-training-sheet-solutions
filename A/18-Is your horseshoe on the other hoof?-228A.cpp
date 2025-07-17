// https://codeforces.com/contest/228/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    unordered_set<int> hs;
    int x, n = 4;

    while(n--) (cin >> x, hs.insert(x));
    cout << 4 - hs.size() << endl;

    return (0);
}
