/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 141A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s1,s2,s3;
    cin >> s1>>s2>>s3;
    s1.append(s2);
    sort(s1.begin(), s1.end());
    sort(s3.begin(), s3.end());
    if(s1==s3) { cout<<"YES"; }
    else { cout<<"NO"; }
    return 0;
}