// http://codeforces.com/contest/732/problem/A

#include <iostream>
using namespace std;

int main(void)
{
    int k, r; cin >> k >> r;
    int i = 1;

    while((i * k) % 10 != 0 && (i * k) % 10 != r)
        i++;
    cout << i << endl;
    return 0;
}
