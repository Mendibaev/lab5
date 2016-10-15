#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
int x,d,s=0;
cin>>x>>d;
                   
	for (int i=10;x>0; )
{
	if (x%i==d) 
	s=s+1;
	x=(x-x%10)/10;
}
cout<<s;
return 0;
}	                   