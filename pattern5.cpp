#include <iostream>
using namespace std;
int main()
{
	cout<<"Enter the no of rows: ";
	int n,k=10;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<k<<" ";
			k--;
		}
		cout<<endl;
	}
	return 0;
}