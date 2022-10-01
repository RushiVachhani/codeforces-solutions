#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
const ll inf = INT_MAX;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll z;
    cin >> z;
    while (z--)
    {
        ll n, i, x, a;
        cin >> n >> x;
        ll m = 0, m1 = 0,sum1,sum2;
        for (i = 0; i < n; i++)
        {
            cin >> a;
            m1 += a;
            m+=(a/x);
            if(a%x!=0)
                m++;
        }
        if(m1%x!=0)
        {
            m1=m1/x;
            m1++;
        }
        else
        {
            m1=m1/x;
        }
        
        sum1=max(m1,m);
        sum2=min(m1,m);
        cout<<sum2<<" "<<sum1<<endl;
    }
    return 0;
}