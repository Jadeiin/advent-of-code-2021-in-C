#include <stdio.h>
int main(void)
{
	int i,n=0,a=0,b=0,c=0,count=0;
	while(scanf("%d",&i)!=EOF)
	{
		if(!(n%3))
		{
			if(a&&a<i)
				count++;
			a=i;	
		}
		else if(!((n+2)%3))
		{
			if(b&&b<i)
				count++;
			b=i;
		}
		else if(!((n+1)%3))
		{
			if(c&&c<i)
				count++;
			c=i;
		}
		n++;
	}
	printf("%d",count);
	return 0;
}
