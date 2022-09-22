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
        int n, k;

        cin >> n >> k;
        vector<ll> arr(n);
        vector<ll> res(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            res[(i + 1) % k] = max(res[(i + 1) % k], arr[i]);
        }

        ll sum = 0;
        for (int i = 0; i < k; i++)
        {
            sum += res[i];
        }
        cout << sum << endl;
        // int strt = 0;
        // ll sum = 0;
        // for (int j = strt; j + k - 1 < n; j++)
        // {
        //     ll sum1 = 0;
        //     sum1 += arr[j];
        //     for (int i = 1; i < k && i < n; i++)
        //     {
        //         sum1 += arr[j + i];
        //     }
        //     //  cout << sum1 << endl;
        //     if (sum1 > sum)
        //     {
        //         strt = j;
        //         sum = sum1;
        //     }
        // }
        // ll mini = 1e10;
        // ll minIndex = -8;
        // for (int i = strt, l = 0; l < k; l++)
        // {
        //     ll mini1 = arr[i + l];
        //     if (mini1 < mini)
        //     {
        //         mini = mini1;
        //         minIndex = i;
        //     }
        // }
        // ll mininin = mini;
        // cout << mini << endl;
        // //  cout << strt + k << endl;
        // int in = k - 1;
        // for (int j = strt + k - 1; j < n; j = j + in)
        // {

        //     // cout << j << " " << arr[j] << endl;

        //     //  break;
        //     mininin = max(mininin, arr[j]);
        //     //  cout << mininin << endl;
        //     // j--;
        // }
        // for (int j = strt - k + 1; j >= 0; j = j - in)
        // {
        //     mininin = max(mininin, arr[j]);
        // }
        // cout << mininin << endl;
        // cout << sum - mini + mininin << endl;
    }

    baperBariJa();
}