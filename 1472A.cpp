/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1472A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    int h,w,t,count=0;
    cin >> n;
    while(n--) {
        cin >> w >> h >> t;
        if(w%2!=0 && h%2!=0) {
            if(t==1) { cout<<"YES\n"; continue; }
            else { cout << "NO\n"; continue;}
        }
        count=1;
        while(h%2==0 || w%2==0) {
            if(w%2==0) {
                w = w/2;
                count = count * 2;
            }
            if(h%2==0) {
                h = h/2;
                count = count * 2;
            }
        }
        if(t<=count) { cout << "YES\n"; }
        else { cout<< "NO\n"; }
    }
    return 0;
}