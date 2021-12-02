#include <stdio.h>
int main(void)
{
	int i,aim=0,x=0,y=0;
	char cmd[8];
	while(scanf("%s %d",cmd,&i)!=EOF)
	{
		if(cmd[0]=='f') x+=i,y+=aim*i; // Here I'm lazy, just do not want to compare strings
		else if(cmd[0]=='d') aim+=i;
		else if(cmd[0]=='u') aim-=i;
	}
	printf("%d",x*y);
	return 0;
}
