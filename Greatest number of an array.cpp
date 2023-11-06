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
int max=0;
	for(int i=0 ; i<a;i++)
	{
	max = (arr[i]>max)? arr[i]:max;
	
	
	}
	
	cout<<"The max is : "<<max<<endl;
	
return 0;
}
