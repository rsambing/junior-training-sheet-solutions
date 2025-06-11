//http://codeforces.com/contest/677/problem/A

#include <iostream>

using namespace std;

int main(void)
{
    int n, h, w = 0; cin >> n >> h;
    for(int i = 0; i < n; i++)
    {
        int num; cin >> num;
        if (num > h)
            w++;
        w++; 
    }
    cout << w << endl;
    return 0;
}
