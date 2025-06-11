// http://codeforces.com/contest/427/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, ans = 0, polices = 0; cin >> n;
    int arr[n]; for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n; i++) 
    {
        if ((arr[i] != -1))
            polices += arr[i];
        else
            ans += polices > 0 ? (polices--, 0) : 1;
    }
    cout << ans << endl;
    return (0);
}
