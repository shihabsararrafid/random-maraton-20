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
vector<pair<ll, ll>> arr;
int main()
{
    LetsGoCin();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        ll num;
        cin >> num;
        arr.push_back(make_pair(num, i + 1));
    }
    sort(arr.begin(), arr.end());
    cout << arr[n - k].first << endl;
    for (int i = n - k; i < n; i++)
    {
        cout << arr[i].second << " ";
    }
    baperBariJa();
}