// http://codeforces.com/contest/231/problem/A

#include <iostream>

using namespace std;

int main(void)
{
    int t, ans = 0; cin >> t;
    while(t--)
    {
        int a, b, c; cin >> a >> b >> c;
        if (a + b + c > 1)
            ans++;
    }
    cout << ans << endl;
    return (0);
}
