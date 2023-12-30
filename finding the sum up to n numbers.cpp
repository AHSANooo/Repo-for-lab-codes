/*Name : Muhammad Ahsan
roll no. : 23I-0553
sec. : E*/
#include<iostream>
using namespace std;
int main(){
		
		int n,sum=0,n1=0,n2=1;
		cout<<"Enter the limit : ";
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			
			for(int j=1;j<=i;j++)
			{
			if(j==2)n1=0;
			sum=n1+n2;
			n1=n2;
			n2=sum;
		
			cout<<sum<<" ";
			}cout<<endl;	
		
		
		sum=0;
		n1=0;
		n2=1;
		
		
		
		
		
		}

return 0;
}
