#include <iostream>
#include <cmath>                            
using namespace std;
int main ()
{
int n,k,C,s1=1,s2=1,s3=1,i1,i2,i3;
cin>>n>>k;
 
 
for (i1=1;i1<=n;i1++)
{
    s1=s1*i1;
    }
 
for (i2=1;i2<=k;i2++)
{
    s2=s2*i2;
}
for (i3=1;i3<=(n-k);i3++)
{
    s3=s3*i3;
}
C=(s1/(s2*s3));
cout<<C;
return 0;
}