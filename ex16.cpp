#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
int x,s=0;
cin>>x;

	for (int i=1;i<=x;i++)
{
	if (x%i==0) s++;
}
cout<<s;
return 0;
}