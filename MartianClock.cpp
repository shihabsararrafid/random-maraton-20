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
int getTime(int base, vector<int> time)
{
    int timer = 0;
    for (int i = time.size() - 1, j = 0; i >= 0; i--, j++)
    {
        //   cout << base << " " << time[i] << endl;
        if (time[i] >= base)
            return -10;
        else
        {
            int tm = (int)((pow(base, j)) + 1e-9);
            tm *= time[i];
            timer += tm;
        }
    }
    return timer;
}
int main()
{
    LetsGoCin();
    vector<int> hour;
    vector<int> min;
    string str1;
    string str2;
    cin >> str1;
    int index;
    for (int i = 0; i < str1.size(); i++)
    {
        if (str1[i] == ':')
        {
            index = i;
            break;
        }
    }
    string str3;
    bool str = false;
    str2 = str1.substr(0, index);
    str3 = str1.substr(index + 1, str1.size() - 1);
    // cout << str2 << " " << str3 << endl;
    for (int i = 0; i < str2.size(); i++)
    {
        int num = str2[i];
        if (num < 65)
        {
            hour.push_back(str2[i] - '0');
        }
        else
        {
            str = true;
            hour.push_back(str2[i] - 'A' + 10);
        }

        // cout << num << endl;
    }
    for (int i = 0; i < str3.size(); i++)
    {
        int num = str3[i];
        if (num < 65)
        {
            min.push_back(str3[i] - '0');
        }
        else
        {
            str = true;
            min.push_back(str3[i] - 'A' + 10);
        }

        // cout << num << endl;
    }
    bool ok = false;
    bool ok1 = false;
    for (int i = 0; i < min.size() - 1; i++)
    {
        //  cout << min[i] << endl;
        if (min[i] == 0)
        {
            continue;
        }
        else
        {
            ok = true;
            break;
        }
    }
    for (int i = 0; i < hour.size() - 1; i++)
    {
        if (hour[i] == 0)
        {
            continue;
        }
        else
        {
            ok1 = true;
            break;
        }
    }
    int num = 1;
    //  cout << getTime(2, min) << endl;
    // if (!ok && !ok1 && num == 2)
    // {
    //     cout << -1 << endl;
    //     return 0;
    // }
    // else
    // {
    vector<int> ans;
    int index3 = 3;
    bool yes = false;
    bool yes1 = false;
    for (int i = 0; i < hour.size(); i++)
    {
        if (hour[i] == 1 || hour[i] == 0)
            continue;
        else
        {
            yes = true;
            break;
        }
    }
    for (int i = 0; i < min.size(); i++)
    {
        if (min[i] == 1 || min[i] == 0)
            continue;
        else
        {
            yes1 = true;
            break;
        }
    }
    if (!yes && !yes1)
        index3 = 2;
    if (str)
        index3 = 10;
    // cout<<getTime()
    //   cout << index3 << endl;
    for (int i = index3; i <= 100; i++)
    {
        // int hour = getTime(i, hour);
        //   int min = getTime(i, min);
        //   cout << getTime(i, hour) << " " << getTime(i, min) << "  " << i << endl;
        if (getTime(i, hour) <= 23 && getTime(i, min) <= 59 && getTime(i, hour) >= 0 && getTime(i, min) >= 0)
        {
            ans.push_back(i);
        }
        // else if (getTime(i, hour) > 23 && getTime(i, min) > 59)
        //     break;
        // cout << getTime(i, hour) << " " << getTime(i, min) << endl;
    }
    if (ans.size() == 0)
        cout << 0 << endl;
    else if (ans.size() >= 60)
        cout << -1 << endl;
    else
    {
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    // }
    // cin >> str1 >> ':' >> str2;
    baperBariJa();
}