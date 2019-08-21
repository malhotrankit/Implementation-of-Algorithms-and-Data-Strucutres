				  /*PRIM'S */
#include<stdio.h>
#include<conio.h>
void prim();
int a[20][20],visited[20],n,min,k,v,min,i,m,j,pos2,pos1;
int main()
{
	int i,j;
	clrscr();
	printf("\tENTER THE NUMBER OF NODES\n");
	scanf("%d",&n);
	printf("\tENTER THE GRAPH IN MATRIX FORM\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	printf("\tENTER THE STARTING NODE\n");
	scanf("%d",&v);
	visited[k]=v;
	prim();
	printf("\n");
	getch();
	return 0;
}
void prim()
{
	while(k!=n-1)
	{
		min=32767;
		for(i=0;i<=k;i++)
		{
			 m=visited[i];
			 for(j=0;j<n;j++)
			 {
				if(a[m][j]<min&&a[m][j]!=0)
				{
					min=a[m][j];
					pos1=m;
					pos2=j;
				}
			 }
		}
		for(i=0;i<=k;i++)
			if(pos2==visited[i])
				break;
		if(i==k+1)
		{
			visited[++k]=pos2;
			printf("\tPATH BETWEEN NODE %d AND NODE %d WITH WEIGHT %d\n",pos1+1,pos2+1,min);
		}
		a[pos1][pos2]=0;
		a[pos2][pos1]=0;
	}
}


