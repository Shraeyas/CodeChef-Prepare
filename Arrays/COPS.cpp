#include<stdio.h>
#include<iostream>
using namespace std;
//int mark[101]={0};
void pg(int *mark,int l,int r)
{
	for(int i=l;i<=r;i++)
	mark[i]=1;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int mark[101]={0};
		int x,y,m,res=0;
		scanf("%d %d %d",&m,&x,&y);
		int pra;
		for(int i=0;i<m;i++)
		{
			scanf("%d",&pra);
			pg(mark,max(1,pra-x*y),min(100,pra+x*y));
			//printf("%d %d\n",max(1,pra-x*y),min(100,pra+x*y));
		}
		for(int i=1;i<=100;i++)
		{
			if(mark[i]==0)
			res++;
			//printf("%d ",mark[i]);
		}
		printf("%d\n",res);
	}
	return 0;
}
