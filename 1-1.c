#include <stdio.h>
int main(void)
{
	int count=0,i,temp=0;
	while(scanf("%d",&i)!=EOF)
	{
		count+=temp&&temp<i;
		temp=i;
	}
	printf("%d",count);
	return 0;
}
