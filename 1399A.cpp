/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1399A
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
        cin >> n;
        int arr[n];
        for(int i=0 ; i<n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        int flag = 0;
        for(int i=1; i<n; i++) {
            if((arr[i]-arr[i-1])>1) {
                cout<<"NO\n";
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
            cout << "YES\n";
        }
    }
    return 0;
}

    