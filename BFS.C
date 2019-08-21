			 /* BREADTH FIRST SEARCH */
#include<stdio.h>
#include<conio.h>
#include<time.h>
int i,j=1,n,a[20][20],visited[20],q[20],v,k;
void bfs();
int main()
{
	int i,j;
	clrscr();
	printf("\tENTER NUMBER OF VERTICES\n");
	scanf("%d",&n);
	printf("\tENTER THE GRAPH IN MATRIX FORM\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	printf("\tENTER THE STARTING NODE\n");
	scanf("%d",&v);
	visited[0]=v;
	q[v]=-1;
	bfs();
	getch();
	return 0;
}
void bfs()
{
	if(j==n)
	{
		printf("\tORDER OF GRAPH TRAVERSAL\n");
		for(i=0;i<n;i++)
			printf("%d ",visited[i]);
	}
	else
	{

		for(i=0;i<n;i++)
			if(a[v][i]==1&&q[i]!=-1)
			{
				visited[j++]=i;
				q[i]=-1;
			}
		v=visited[++k];
		bfs();
	}
}





