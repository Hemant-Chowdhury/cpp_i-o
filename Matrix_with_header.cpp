#include<bits/stdc++.h>
using namespace std;
typedef char c;
string a[1000][1000];
string tab="		";
void display(int n,int m)
{
	int space=15,i=0,j,k;
	cout<<(c)201;
	for(j=0;j<m;j++)
	{
		for(k=0;k<space;k++)
		{
			cout<<(c)205;
		}
		if(j==m-1)
		cout<<(c)187<<endl;
		else
		cout<<(c)209;
	}
	cout<<(c)186;
	for(j=0;j<m-1;j++)
	cout<<a[i][j]<<tab<<(c)179;
	cout<<a[i][j]<<tab<<(c)186<<endl;
	cout<<(c)204;
	for(j=0;j<m;j++)
	{
		for(k=0;k<space;k++)
		cout<<(c)205;
		if(j==m-1)
		cout<<(c)185<<endl;
		else
		cout<<(c)216;
	}
	for(i=1;i<n;i++)
	{
		cout<<(c)186;
		for(j=0;j<m-1;j++)
		{
			cout<<a[i][j]<<tab<<(c)179;
		}
		cout<<a[i][j]<<tab<<(c)186<<endl;
		if(i==n-1)
		cout<<(c)200;
		else
		cout<<(c)199;
			for(j=0;j<m;j++)
			{
				if(i==n-1)
				{
					for(k=0;k<space;k++)
					cout<<(c)205;
				}
				else
				{
					for(k=0;k<space;k++)
					cout<<(c)196;
				}
				if(j==m-1)
				{
					if(i==n-1)
					cout<<(c)188<<endl;
					else
					cout<<(c)182<<endl;
				}
				else
				{
					if(i==n-1)
					cout<<(c)207;
					else
					cout<<(c)197;
				}
			}
		
	}
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    display(10,5);
}

// Name - Hemant Chowdhury
// Arise, Awake And Stop Not Till The Goal Is Reached!
// If I fail,I will stand again;If I win,I will move farther

