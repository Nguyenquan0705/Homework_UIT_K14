#include <iostream>
using namespace std;



void Import_Matrix(int arr[][100],int n,int m)
{
	for (int i = 0; i < n;i++)
	{
		for (int j = 0; j < m;j++)
		{
			cin>>arr[i][j];
		}
	}
}


void Export_Matrix(int arr[][100],int n,int m)
{
	for (int i = 0; i < n; i++)
	{
		for(int j = 0;j < m;j++)
		 {
		 	cout<<arr[i][j]<<" ";
		 }
		 cout<<endl;
	}
}

int Check_Any_Pos_Num(int arr[][100],int n,int m)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
	{
		for(int j = 0;j < m;j++)
		 {
		 	if(arr[i][j] > 0)
		 		flag = 1;
		 }
	}
	return flag;
}

int main()
{
	int arr[100][100];
	int n,m;
	cin>>n>>m;
	Import_Matrix(arr,n,m);
	Export_Matrix(arr,n,m);
	cout<<Check_Any_Pos_Num(arr,n,m);
	return 0;
}
