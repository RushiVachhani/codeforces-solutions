/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 996A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int count=0;
    while(n) {
        if(n>=100) { count = count + n/100; n=n-(n/100)*100; }
        if(n>=20 && n<100) { count = count + n/20; n=n-(n/20)*20; }
        if(n>=10 && n<20) { count = count + n/10; n=n-(n/10)*10; }
        if(n>=5 && n<20) { count = count + n/5; n=n-(n/5)*5; }
        if(n>=1 && n<5) { count = count + n/1; n=n-(n/1)*1; }
    }
    cout << count;
    return 0;
}