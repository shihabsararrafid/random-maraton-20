#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <set>
using namespace std;
#define LetsGoCin()                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define li long
#define ll long long
#define ull unsigned long long
#define baperBariJa() return 0
#define prntl(a) cout << a << endl
#define nl cout << endl
#define lp1(i, n) for (int i = 1; i <= n; i++)
#define lp2(i, n) for (int i = 0; i < n; i++)
#define prnt(a) cout << a
int main()
{
    LetsGoCin();
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        // int big = x;
        // int small = y;
        // if (x < y)
        // {
        //     big = y;
        //     small = x;
        // }

        if (y != 0 && x != 0)
            cout << -1 << endl;
        else if (x == 0 && y == 0)
            cout << -1 << endl;
        if (x < y)
            swap(x, y);
        if (((n - 1) % x) != 0)
            cout << -1 << endl;

        else
        {
            // cout << (n - 1) << " ";
            int q = 1;
            y = 0;

            for (int i = 0; i < n - 1; i++)
            {
                if (x == y)
                {
                    y = 0;
                    q = i + 2;
                }
                y++;
                cout << q << " ";
            }
            cout << endl;
        }
    }
    baperBariJa();
}