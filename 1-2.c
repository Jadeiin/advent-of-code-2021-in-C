#include <stdio.h>
int main(void)
{
	int i,n=0,num[3]={0},count=0;
	while(scanf("%d",&i)!=EOF)
	{
		if(num[n%3]<i&&num[n%3])
			count++;
		num[n++%3]=i;
	}
	printf("%d",count);
	return 0;
}
