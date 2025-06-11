// http://codeforces.com/contest/59/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    std::string s; cin >> s;
    int a = 0, b = 0;

    for(char c : s)
    {
        if (isupper(c))
            a++;
        else
            b++;
    }
    if (a > b)
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    else
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;
    return (0);
}
