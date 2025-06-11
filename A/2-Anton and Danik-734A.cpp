// http://codeforces.com/contest/734/problem/A

#include <iostream>

using namespace std;

int main(void)
{
    int n, a = 0, d = 0; cin >> n;
    std::string games; cin >> games;
    for (char c : games)
    {
        if (c == 'A')
            a++;
        if (c == 'D')
            d++;
    }
    if (a > d)
        cout << "Anton" << endl;
    else if (d > a)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;
    return (0);
}
