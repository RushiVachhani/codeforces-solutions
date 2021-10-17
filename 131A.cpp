#include<bits/stdc++.h>
using namespace std;
 
int main()
{string s;
cin>>s;
int count=0,flag=0;
if(s.length()==1)
{if(islower(s[0]))
{transform(s.begin(),s.end(),s.end(),::toupper);}
else if(isupper(s[0]))
transform(s.begin(),s.end(),s.end(),::tolower);
}
 
for(int i=0;i<s.length();i++)
{
if(isupper(s[i]))
{
    count++;
}
}
if(count==s.length())
{
for(int i=0;i<s.length();i++)
{
    if(islower(s[i]))
   { s[i]=toupper(s[i]);}
    else if(isupper(s[i]))
    s[i]=tolower(s[i]);
}
}
int count2=0;
if(islower(s[0])&& isupper(s[1]))
{
for(int i=1;i<s.length();i++)
{
    if(isupper(s[i]))
{
    count2++;
}
}
if(count2==s.length()-1)
{for(int i=0;i<s.length();i++)
{
    if(islower(s[i]))
   { s[i]=toupper(s[i]);}
    else if(isupper(s[i]))
    s[i]=tolower(s[i]);
}
}}
cout<<s;
return 0;
}