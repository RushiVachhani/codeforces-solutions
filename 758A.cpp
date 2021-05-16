/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 758A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    if(n==1) {
        cout<<0;
        return 0;
    }
    else {
        sort(arr, arr+n);
        int count = 0;
        for(int i=0; i<n; i++) {
            count = count + arr[n-1]-arr[i];
        }
        cout << count;
    }
    return 0;
}