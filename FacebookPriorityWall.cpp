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
// this is to declare a comparison function to sort the vector pair if and if there is any element where the points are same then it will sort lexicography
// without it the sort function is showing wa
bool compare(pair<int, string> &e1, pair<int, string> &e2)
{
    if (e1.first < e2.first)
        return true;
    else if (e1.first > e1.first)
        return false;
    else if (e1.first == e2.first)
        return e1.second > e2.second;
    else
        return e1.first < e2.first;
}
int main()
{
    LetsGoCin();
    string name;
    cin >> name;
    map<string, int> mp;
    int n;
    cin >> n;
    while (n--)
    {
        string name1, act, on, name2, other;
        ll val;
        cin >> name1 >> act;
        if (act == "posted" || act == "commented")
        {
            cin >> on >> name2 >> other;
        }
        else
        {
            cin >> name2 >> other;
        }
        if (act == "posted")
        {
            val = 15;
        }
        else if (act == "commented")
        {
            val = 10;
        }
        else
        {
            val = 5;
        }
        name2 = name2.substr(0, name2.size() - 2);
        //  cout << name1 << " " << act << " " << name2 << " " << other << endl;
        if (name1 != name && name2 != name)
        {
            mp.insert({name1, 0});
            mp.insert({name2, 0});
        }
        else if (name1 == name)
        {
            //   cout << mp[name2] << endl;
            mp[name2] += val;
            //  cout << "name1 " << name2 << "  " << mp[name2] << endl;
        }
        else if (name2 == name)
        {
            mp[name1] += val;
        }
    }
    vector<pair<int, string>> ans;
    for (auto const &kv : mp)
    {
        ans.push_back(make_pair(kv.second, kv.first));
        // cout << kv.first << " " << kv.second << endl;
    }
    sort(ans.begin(), ans.end(), compare);
    for (int i = ans.size() - 1; i >= 0; i--)
    {
        cout << ans[i].second << endl;
    }
    baperBariJa();
}