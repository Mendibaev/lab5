#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
int x,a,s=0,d;
cin>>x;
	
	for (int i=10;x>0; )
{
	a=x%i;
	x=(x-x%10)/10;
	d=d*2;
	s=s+a*d;
}
cout<<s;
return 0;
}