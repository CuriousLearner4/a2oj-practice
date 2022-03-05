#include <iostream>
using namespace std;
int main()
{
    int a[]= {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int i,j,x,y,p1,p2;
    p1=p2=0;
    cin>>x>>y;
    for(i=0;i<15;++i)
         if(a[i]==x) p1=i;
    for(j=0;j<15;++j)
         if(a[j]==y) p2=j;
    if((p2-p1)==1) cout<<"YES";
    else  cout<<"NO";
    return 0;
}