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
        int d, D, P, Q;
        cin >> d >> D >> P >> Q;
        int i = 0;
        ll sum = 0;
        ll end = d / D;
        sum += (P * d);
        // cout<<sum<<endl;
        ll cum = (((end - 1) * (end)) / 2);
        // cout << cum << endl;
        // cout << end << endl;

        sum += (cum * Q * D);
        // cout<<sum<<endl;
        // cout<<d%D<<endl;
        sum += ((d % D) * Q * end);
        //   sum += (P * (d % D));
        // cout<<sum<<endl;
        // cout<<end<<endl;
        //     for(int j=1;j<=end;j++){
        //         if(d<D){
        //   sum +=((j-1)*(Q)+P)*d;
        //         }
        //         else{
        //             sum+=(((j-1)*(Q))+P)*D;
        //         }
        //     //  cout<<sum<<endl;
        //         d-=D;

        //     }
        cout << sum << endl;
    }
    baperBariJa();
}