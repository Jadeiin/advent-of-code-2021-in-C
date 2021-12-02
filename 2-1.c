#include <stdio.h>
int main(void)
{
	int i,x=0,y=0;
	char cmd[8];
	while(scanf("%s %d",cmd,&i)!=EOF)
	{
		if(cmd[0]=='f') x+=i; // Here I'm lazy, just do not want to compare strings
		else if(cmd[0]=='d') y+=i;
		else if(cmd[0]=='u') y-=i;
	}
	printf("%d",x*y);
	return 0;
}
