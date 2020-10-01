#include<bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		char arr[9][9];
		for(int i=0;i<9;i++)
		{
			for(int j=0;j<9;j++)
			{
				cin>>arr[i][j];
			}
		}
		arr[0][8]=arr[0][7];
		arr[1][5]=arr[1][4];
		arr[2][2]=arr[2][1];
		arr[3][7]=arr[3][6];
		arr[4][4]=arr[4][3];
		arr[5][1]=arr[5][0];
		arr[6][6]=arr[6][7];
		arr[7][3]=arr[7][4];
		arr[8][0]=arr[8][1];
 
			for(int i=0;i<9;i++)
		{
			for(int j=0;j<9;j++)
			{
				cout<<arr[i][j];
			}
			cout<<endl;
		}
 
 
	}
	return 0;
}