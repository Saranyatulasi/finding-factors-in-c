#include<stdio.h>
int main ()
{
	int  n,i,cnt;
	scanf ("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n % i ==0)
		{
			printf("%d ",i);
		}
		
	}
}