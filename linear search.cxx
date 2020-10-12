# include<stdio.h>
void main()
{
	int a[50],s,n,mid,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter search element: ");
	scanf("%d",&s);
	for(i=0;i<n/2;i++)
	{ if(s==a[i])
	  printf("%d",i);
	}
}