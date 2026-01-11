/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1367B
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
        int even_no =0, odd_no = 0, off_place = 0,x;
        for(int i=0; i<n; i++) {
            cin >> x;
            if((i%2==0 && x%2==0) || (i%2==1 && x%2==1)) {
                continue;
            }
            else {
                if(x%2==0) { even_no++;}
                else { odd_no++; }
                off_place++;
            }
        }
        if(off_place%2!=0) { cout<<-1<<"\n";}
        else {
            if(even_no==odd_no) { cout<<off_place/2<<"\n"; }
            else { cout<< -1 <<"\n"; }
        }
    }

    return 0;
}