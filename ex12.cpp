#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
int x,s=0;
cin>>x;
	for (int i=10;x>0 ; )
{	
	s=s+x%i;
	x=(x-x%10)/10;
}
cout<<s;
return 0;
}	