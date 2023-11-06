//program for sum of series 1 + (1+2) + (1+2+3) + ..... n
#include<iostream>

using namespace std;

int main () {
	int n,sumt=0,sum=0;
	cin>>n;
		for (int i=1;i<=n;i++)
		{
		sum+=i;
		sumt+=sum;
		
		}
	cout<<sumt;
	
return 0;
} 
