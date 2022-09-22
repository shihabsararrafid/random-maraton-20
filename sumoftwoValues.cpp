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
ll BinarySearch(ll num, int n)
{
    //  cout << num << endl;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        //  cout << mid << endl;
        // cout << arr[mid].first << endl;
        if (arr[mid].first == num)
        {
            //  cout << "YES" << endl;
            //  cout << arr[mid].second << " " << arr[mid].first << endl;
            int indices = arr[mid].second;
            // cout << arr[mid].second << endl;
            return indices;
        }
        else if (num > arr[mid].first)
        {
            low = mid + 1;
        }
        else if (num < arr[mid].first)
        {
            high = mid - 1;
            // cout << "Hihg  " << high << endl;
        }
    }
    return -3;
}
int main()
{
    LetsGoCin();
    ll n, x;
    cin >> n >> x;
    // vector<vector<ll>> arr(2, vector<ll>(n));

    for (int i = 0; i < n; i++)
    {
        ll num;
        cin >> num;
        arr.push_back(make_pair(num, i + 1));
    }

    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        //  cout << arr[i].first << " " << arr[i].second << endl;
    }
    //   cout << "result  " << BinarySearch(3, n) << endl;
    for (int i = 0; i < n; i++)
    {
        ll ind = BinarySearch(x - arr[i].first, n);
        //  cout << (x - arr[i].first) << " " << ind << endl;
        if (ind != -3 && ind != arr[i].second)
        {
            cout << arr[i].second << " " << ind << endl;
            return 0;
        }
    }
    cout << "IMPOSSIBLE" << endl;
    baperBariJa();
}