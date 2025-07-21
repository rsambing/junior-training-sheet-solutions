// https://codeforces.com/contest/709/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, b, d; cin >> n >> b >> d;
    int sum = 0, ans = 0;
    
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if (x <= b)
        {
            sum += x;
            if (sum > b)
            {
                sum = 0;
                ans++;
            }
        }
    }
    cout << ans << endl;
    return (0);
}
