#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a,b;
    for(int i=0;i<s.length();++i)
    {
        if(s[i]>=65&&s[i]<=90) ++a;
        else ++b;
    }
    if(a>b)
    {
       for(int i=0;i<s.length();++i)
       {
           if(s[i]>=97&&s[i]<=122) s[i]=s[i]-32;
       }
    }
    else
    {
        for(int i=0;i<s.length();++i)
        {
           if(s[i]>=65&&s[i]<=90) s[i]=s[i]+32;
        }
    }
    cout<<s;
    return 0;
}