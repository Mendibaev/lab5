#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
int a,n,s=1,ai=1;
cin>>a>>n;   	
	
	for (int i=1;i<=n;i++)

{	
        ai=ai*a;	
        s=s+ai;
	
}
cout<<s;
return 0;
}