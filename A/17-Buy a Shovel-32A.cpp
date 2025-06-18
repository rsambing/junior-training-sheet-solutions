// http://codeforces.com/contest/732/problem/A

#include <iostream>
using namespace std;

int main(void)
{
    int k, r;
    cin >> k >> r;

    for (int i = 1; i <= 10; i++) {
        int total = i * k;
        if (total % 10 == 0 || total % 10 == r) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
