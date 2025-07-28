// https://codeforces.com/contest/770/problem/A

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, k; cin >> n >> k;
    vector<char> dist(k, 'a');
    for (int i = 0; i < k; i++) dist[i] += i;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        cout << dist[j++];
        if (j >= k)
            j = 0;
    }
    cout << endl;
    return (0);
}
