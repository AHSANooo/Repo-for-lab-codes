#include <iostream>//a program to sort the  elements of an array  by the columns
#include <cstring>

using namespace std;


const int rows=3;
const int cols=3;

void csort(int[][cols]);

int main() {

int arr[rows][cols];

cout<<"Enter the elements : "<<endl;
	
	for(int i=0;i<rows;i++)
	{
		for(int  j=0;j<cols;j++)
		{
			cin>>arr[i][j];
		}
	}
cout<<"Orignal array : "<<endl;
	
		for(int i=0;i<rows;i++)
	{
		for(int  j=0;j<cols;j++)
		{
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}
	
	csort(arr);
	
	cout<<"Changed array : "<<endl;
	
		for(int i=0;i<rows;i++)
	{
		for(int  j=0;j<cols;j++)
		{
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}
	
    return 0;
}
void csort(int arr[rows][cols])
{int temp;
for(int k=0;k<cols;k++)
{	
	for(int  j=0;j<cols;j++)
	{
		for(int i=0;i<rows-1;i++)
		{
			if(arr[i][k]>arr[i+1][k])
			{
				temp=arr[i+1][k];
				arr[i+1][k]=arr[i][k];
				arr[i][k]=temp;
			}
		}
	}
}	
}
