#include<stdio.h>
int main()
{
	int a[20][20],m,n,i,j,sum=0;
/*	printf("enter the number of rows:");
	scanf("%d",&m);*/
	printf("enter te number of coloumns:");
	scanf("%d",&n);
	m=n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	//sum of left diagonal
	for(i=0;i<n;i++)
	{
			m=n-1;
			for(j=0;j<n;j++)
			{
				if(j==m)
				{
					sum=sum+a[i][j];
				}
			}
			printf("sum is :%d",sum);
	}
}
	
