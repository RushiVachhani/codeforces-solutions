/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1490A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int getnumber(int a, int b) {
    int small, big, count=0, temp=0;
    if(a<=b) {
        small=a;
        big=b;
    }
    else {
        small = b;
        big = a;
    }
    
    while(true) {
        temp = 2*small;
        small=temp;
        if(temp<big) { count++; }
        else { break; }
        
    }
    return count;
}

void solve() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int ans = 0;
    for(int i=0; i<n-1; i+=1) {
        if( ((float)max(arr[i], arr[i+1])/(float)min(arr[i],arr[i+1])) > 2.0 ) {
            ans += getnumber(arr[i], arr[i+1]);
        }
    }
    cout<<ans<<"\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}