#include <stdio.h>
int main(void)
{
	int count=0,i,temp=0,t;
	while(scanf("%d",&i)!=EOF)
	{
		if(temp&&temp<i)
			count++;
		temp=i;
	}
	printf("%d",count);
	return 0;
}
