/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1154A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[4];
    for(int i=0 ; i<4; i++) {
        cin >> arr[i];
    }
    sort(arr,arr+4);
    int a,b,c;
    b = (arr[0]-arr[1]+arr[2])/2;
    a = arr[0]-b;
    c = arr[1]-a;
    cout << a << " "<< b << " "<< c;
    
    return 0;
}