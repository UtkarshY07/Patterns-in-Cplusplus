#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the no of rows: ";
	cin>>n;
	for(int i=n-1,k=0; i>=1; i--,k=0)
	{
		for(int j=1;j<=(n-i);j++)
		{
			cout<<" ";
		}
		while(k != i)
		{
			cout<<"*";
			k++;
		}
		cout<<endl;
	}
	return 0;	
}