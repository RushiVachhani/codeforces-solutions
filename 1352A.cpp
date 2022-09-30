/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1352A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    int n,x,count;
    
    while(t--) {
        cin >> n;
        count=0;
        vector<int> numbers;
        int pow=10;
        for (int i=0;i<=4;i++) {
            x = n%pow;
            if(x!=0) {
                count++;
                numbers.push_back(x);
            }
            n = n-x;
            pow = pow*10;
        }
        cout<< count<<"\n";
        for(int i=0 ; i<count; i++) {
            cout << numbers[i] <<" ";
        }
        cout <<"\n";
    }
    return 0;
}