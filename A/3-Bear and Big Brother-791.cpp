// http://codeforces.com/contest/791/problem/A

#include <iostream>

using namespace std;

int main(void)
{
    int a, b, ans = 0; cin >> a >> b;
    while(a <= b)
    {
        ans++;
        a *= 3;
        b *= 2;
    }
    cout << ans << endl;
    return (0);
}
