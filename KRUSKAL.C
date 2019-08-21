				/* KRUSKAL */
#include<stdio.h>
#include<conio.h>
int i,j,a[20][20],n,min=32767,pos1,pos2,k,parent[20],sum,m;
void kruskal();
int main()
{
	int i,j;
	clrscr();
	printf("\tENTER NUMBER OF NODES\n");
	scanf("%d",&n);
	printf("\tENTER GRAPH IN MATRIX FORM\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
		parent[i]=i;
	}
	kruskal();
	printf("\n");
	getch();
	return 0;
}
void kruskal()
{
	while(sum!=n-1)
	{
		min=32767;
		for(i=1;i<n;i++)
		{
			for(j=0;j<i;j++)
			{
				if(a[i][j]<min&&a[i][j]!=0)
				{
					pos1=i;
					pos2=j;
					min=a[pos1][pos2];
				}
			}
		}
		if(parent[pos1]!=parent[pos2])
		{
			m=parent[pos2];
			sum++;
			for(i=0;i<n;i++)
				if(parent[i]==m)
					parent[i]=parent[pos1];
			printf("\tPATH BETWEEN %d NODE AND %d NODE OF WEIGHT %d\n" ,pos2+1,pos1+1,min);
		}
		a[pos1][pos2]=0;
	}

}









