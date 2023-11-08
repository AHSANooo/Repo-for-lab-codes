//Program to find the largest number of a given array


#include<iostream>

using namespace std;

int main () {

const int a =15;
srand(time(0));
int arr[a];
	
	for (int i=0; i<a;i++)
	{
	arr[i]=rand()%50+1;
	cout<<arr[i]<<endl;
	}
int temp=0;
	for(int i=0 ; i<a ; i++)
	{
		for(int j=0; j<a ; j++)
		{
			if(arr[j]>arr[j+1])
			{
			
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			
			}
		
		
		
		
		}
	
	
	}
	
	cout<<"The max 1 is : "<<arr[a-1]<<endl;
	for(int i=a-1; i>0 ;i-- )
	{
	if(arr[i-1]<arr[a-1])
	{cout<<"The max 2 is : "<<arr[i-1]<<endl;}
	if(arr[i-2]<arr[i-1])
	{cout<<"The max 3 is : "<<arr[i-2]<<endl;break;}
	}
return 0;
}
