// https://codeforces.com/contest/567/problem/A

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
typedef long long ll;

int main()
{
    fastio;

    int n; cin >> n;
    vector<ll> arr(n);
    for (auto &x : arr) cin >> x;

    for (int i = 0; i < n; i++) 
    {
        ll mini, maxi;
        if (i == 0) 
        {
            mini = abs(arr[i] - arr[i + 1]);
            maxi = abs(arr[i] - arr[n - 1]);
        } 
        else if (i == n - 1)
        {
            mini = abs(arr[i] - arr[i - 1]);
            maxi = abs(arr[i] - arr[0]);
        } 
        else
        {
            mini = min(abs(arr[i] - arr[i - 1]), abs(arr[i] - arr[i + 1]));
            maxi = max(abs(arr[i] - arr[0]), abs(arr[i] - arr[n - 1]));
        }
        cout << mini << " " << maxi << '\n';
    }
    return 0;
}
