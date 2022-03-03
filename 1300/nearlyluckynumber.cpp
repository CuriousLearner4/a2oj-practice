#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a,b;
    a=b=0;
    for(int i=0;i<s.length();++i)
    {
        if(s[i]=='4') ++a;
        else if (s[i]=='7') ++b;
    }
    if(a+b==4||a+b==7) cout<<"YES";
    else cout<<"NO";
}