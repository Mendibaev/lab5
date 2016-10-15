#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
double n,s=1.0;
cin>>n;
 
    for (int i=2;i<=n;i++)
{
    s=s+1/(i*i);
	
}
cout<<s;
return 0;
}
