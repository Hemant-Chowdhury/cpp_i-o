#include<bits/stdc++.h>
using namespace std;
typedef char c;
string a[1000][1000];
string tab="		";
void display(int n,int m)
{
	int space=15,i,j,k;
	cout<<(c)218;
	for(i=0;i<m;i++)
	{
		for(j=0;j<space;j++)
		{
			cout<<(c)196;
		}
		if(i==m-1)
		cout<<(c)191<<endl;
		else
		cout<<(c)194;
	}
	
	for(i=0;i<n;i++)
	{
		cout<<(c)179;
		for(j=0;j<m;j++)
		{
			cout<<a[i][j]<<tab<<(c)179;
		}
		cout<<endl;
		if(i==n-1)
		cout<<(c)192;
		else
		cout<<(c)195;
			for(j=0;j<m;j++)
			{
				for(k=0;k<space;k++)
				cout<<(c)196;
				if(j==m-1)
				{
					if(i==n-1)
					cout<<(c)217<<endl;
					else
					cout<<(c)180<<endl;
				}
				else
				{
					if(i==n-1)
					cout<<(c)193;
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
    display(1,5);
    display(10,5);
}

// Name - Hemant Chowdhury
// Arise, Awake And Stop Not Till The Goal Is Reached!
// If I fail,I will stand again;If I win,I will move farther

