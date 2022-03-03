#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int length;
    string s;
    cin>>length>>s;
    int i,j=0;
    for(i=0;i<length;++i)
    {
       if(s[i]!=s[j]) 
       {
            j++;
            s[j]=s[i];
       }
    }
    cout<<i-(j+1);
    return 0;
}