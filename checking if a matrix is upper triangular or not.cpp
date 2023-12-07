/*Name : Muhammad Ahsan
Roll no. : 23I-0553
section : E*/
#include <iostream>

using namespace std;

const int rows=4,cols=4; 

bool IsMatrixUpperTriangular( int [][cols] , int , int );

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
	
	cout<<"Your array:"<<endl;;
	for(int i=0;i<rows;i++)
	{
		for(int  j=0;j<cols;j++)
		{
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}
	
	bool b=IsMatrixUpperTriangular(arr, rows , cols);
	
	if(b==true)
	cout<<"Matrix is upper triangular!"<<endl;
	else
	cout<<"Matrix is not upper triangular!"<<endl;

    return 0;
}
bool IsMatrixUpperTriangular( int arr[rows][cols] , int rows , int cols)
{bool b=true;
	for(int i=0;i<rows;i++)
	{
		for(int  j=0;j<cols;j++)
		{
			if(i>j)
			{
				if(arr[i][j]!=0)
				{
					b=false;
				}
			}
		}
	}
	

return b;
}
