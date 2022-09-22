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
vector<ll> divisor;
ll getGCD(ll a, ll b)
{
    while (b != 0)
    {
        return getGCD(b, a % b);
    }
    return a;
}
int binarySearch(ll num, int len)
{
    int low = 0, high = len - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (divisor[mid] == num)
        {
            return num;
        }
        else if (num > divisor[mid])
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return -100;
}
int main()
{
    LetsGoCin();
    ll a, b;
    cin >> a >> b;
    ll gcd = getGCD(a, b);

    for (ll i = 1; i * i <= gcd; i++)
    {
        if (gcd % i == 0)
        {
            divisor.push_back(i);
            if (i != gcd / i)
            {
                divisor.push_back(gcd / i);
            }
        }
    }
    int len = divisor.size();
    sort(divisor.begin(), divisor.end());
    // for (int i = 0; i < len; i++)
    // {
    //     cout << divisor[i] << endl;
    // }
    // cout << gcd << endl;
    int n;
    cin >> n;
    while (n--)
    {
        ll low, high;
        cin >> low >> high;
        // ll div = (high / gcd) - (low / gcd);
        // // if (div == 0)
        // // {
        // //     cout << -1 << endl;
        // // }

        // ll lew = high / gcd;
        // lew = lew * gcd;
        // ll ans = -1;
        // for (ll i = high; i >= low; i--)
        // {
        //     if ((gcd % i == 0))
        //     {
        //         ans = i;
        //         break;
        //     }
        // }
        // if (ans == -1 && gcd % low == 0)
        // {
        //     ans = low;
        // }
        ll ans = -1;
        ll max = -8;
        for (int i = 0; i < divisor.size(); i++)
        {
            if (divisor[i] >= low && divisor[i] <= high)
            {
                max = divisor[i];
            }
        }
        if (max > ans)
            cout << max << endl;
        else
            cout << -1 << endl;
        // for (ll i = low; i <= high; i++)
        // {
        //     if (binarySearch(i, len) > 0)
        //     {
        //         ans = binarySearch(i, len);
        //     }
        // }
        // if (ans >= low && ans != -1)
        //     cout << ans << endl;
        // else
        //     cout << -1 << endl;
    }
    baperBariJa();
}