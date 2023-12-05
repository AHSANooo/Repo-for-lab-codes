/*Name : Muhammad Ahsan
Roll no. : 23I-0553
section : E*/
#include <iostream>

using namespace std;

const int rows=3,cols=3;

void transpose(int arr1[rows][cols], int arr2[cols][rows]);

int main() {
	
	
	
	int arr1[rows][cols]={0};
	int arr2[cols][rows]={0};
	
	cout<<"Orignal Array : "<<endl;	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
		
		cin>>arr1[i][j];
		
		}
	}
	
	transpose( arr1 ,arr2);
	
	cout<<"Trancepose : "<<endl;
	for(int i=0;i<cols;i++)
	{
		for(int j=0;j<rows;j++)
		{
		
		cout<<arr2[i][j]<<" ";
		
		}cout<<endl;
	}
	
	
	
    return 0;
}
void transpose(int arr[rows][cols] , int arr2[cols][rows])
{
	for(int j=0;j<cols;j++)
	{
		for(int i=0;i<rows;i++)
		{
		
		arr2[i][j]=arr[j][i];
		
		}
	}	
}
