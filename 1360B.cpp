/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1360B
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
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        vector<int>v;
        int dif = 0;
        for(int i=1; i<n; i++){
            dif = a[i] - a[i-1];
            v.push_back(dif);
        }

        sort(v.begin(),v.end());
        cout<<v[0]<<endl;
    }

    return 0;
}