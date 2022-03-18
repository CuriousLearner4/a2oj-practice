#include <iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    if(n%2==1){ cout<<"-1"; return 0;}
    else
    {for(int i=n;i>=1;--i) cout<<i<<" ";}

    return 0;
}