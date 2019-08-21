			   /* DEPTH FIRST TRAVERSAL */
#include<stdio.h>
#include<conio.h>
int i,j=1,a[20][20],q[20],visited[20],v,n,k;
void dfs();
int main()
{
	int i,j;
	clrscr();
	printf("\tENTER THE NUMBER OF VERTICES IN GRAPH\n");
	scanf("%d",&n);
	printf("\tENTER THE GRAPH IN MATRIX FORM\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	printf("\tENTER THE STARTING VERTEX\n");
	scanf("%d",&v);
	visited[0]=v;
	q[v]=-1;
	dfs();
	printf("\n");
	getch();
	return 0;
}
void dfs()
{
	if(j==n)
	{
		printf("\tORDER OF GRAPH TRAVESRSAL\n");
		for(i=0;i<n;i++)
			printf("%d ",visited[i]);
	}
	else
	{
		k=j;
		for(i=0;i<n;i++)
		{
			if(a[v][i]==1&&q[i]!=-1)
			{
				v=i;
				q[i]=-1;
				visited[j++]=i;
				break;
			}
		}
		if(j==k)
			v=visited[j-2];
		dfs();
	}

}