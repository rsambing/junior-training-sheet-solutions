// http://codeforces.com/contest/431/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int vet[4]; for(int i = 0; i < 4; i++) cin >> vet[i];
    string str; cin >> str;
    int ans = 0;
    for(char &c : str)
    {
        int index = c - '1';
        ans += vet[index];
    }
    cout << ans << endl;
    return (0);
}
