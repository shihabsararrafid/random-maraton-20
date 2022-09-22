#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <set>
#include <iomanip>
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
vector<int> arr;
map<ll, ll> mp;
vector<ll> res;
vector<ll> factor;
void factorial()
{
    ll fact = 1;
    ll i = 1;
    while (i <= 20)
    {
        fact = fact * i;
        factor.push_back(fact);
    }
}
bool binarySearch(int num, int len)
{
    int low = 0, high = len - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == num)
        {
            return true;
        }
        else if (num > arr[mid])
        {
            low = mid + 1;
        }
        else if (num < arr[mid])
        {
            high = mid - 1;
        }
    }
}
// 2 0 -2
int main()
{
    factorial();
    LetsGoCin();
    string str1;
    string str2;
    cin >> str1 >> str2;
    ll pos = 0;
    for (int i = 0; i < str1.size(); i++)
    {
        if (str1[i] == '+')
            pos++;
        else if (str1[i] == '-')
            pos--;
    }
    ll pos2 = 0;
    ll ano = 0;

    for (int i = 0; i < str2.size(); i++)
    {
        if (str2[i] == '+')
            pos2++;
        else if (str2[i] == '-')
            pos2--;
        else if (str2[i] == '?')
            ano++;
    }
    ll num = factor[ano - 1];
    int j = 1;
    ll whole = 0;
    for (int i = ano; i >= 0; i -= 2)
    {
        ll nuem = (num) / (factor[j]);
        nuem /= factor[ano - j];
        cout << nuem << endl;
        whole += nuem;
        if (i == 0)
        {
            mp.insert({i + pos2, nuem * 2});
        }
        else
        {
            mp.insert({i + pos2, nuem});
            mp.insert({-1 * i + pos2, nuem});
        }

        // arr.push_back(i);
        // arr.push_back(i * -1);
    }
    for (auto const &kv : mp)
    {
        cout << kv.first << " " << kv.second << endl;
    }
    // cout << pos << "  " << pos2 << endl;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     //  mp[arr[i] + pos2]++;
    //     res.push_back(arr[i] + pos2);
    //     //   cout << arr[i] << "  ";
    // }
    // for (int i = 0; i < res.size(); i++)
    // {
    //     cout << res[i] << endl;
    // }
    // int lne = res.size();
    // int freq = count(res.begin(), res.end(), pos);
    // float res = (float)freq / (float)(lne);
    // // cout << freq << endl;
    // cout << fixed << setprecision(9) << res << endl;
    // sort(arr.begin(), arr.end());
    baperBariJa();
}