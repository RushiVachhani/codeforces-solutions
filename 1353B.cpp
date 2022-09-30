/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1353B
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int a[n], b[n], sum_a=0, flag = 0;
        for(int i=0; i<n; i++) {
            cin >> a[i];
        }
        for(int i=0; i<n; i++) {
            cin >> b[i];
        }
        if(k==0) { cout << accumulate(a, a+n, sum_a)<<"\n"; flag=1; continue; }
        else {
            sort(a, a+n);
            sort(b, b+n);
        }
        for(int i=0; i<k; i++) {
            if(a[i]>b[n-1-i]) {
                cout << accumulate(a, a+n, sum_a)<<"\n";
                flag = 1;
                break;
            }
            else {
                a[i] += b[n-1-i];
                b[n-1-i] = a[i] - b[n-1-i];
                a[i] = a[i] - b[n-1-i];
            }
        }
        if(flag == 0) {
            cout<<accumulate(a, a+n, sum_a)<<"\n";
        }
    }

    return 0;
}