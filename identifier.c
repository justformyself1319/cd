#include<ctype.h>
#include<stdlib.h>
#include<stdio.h>
void main()
{
int state=1;
char input[10];
int ip=0;
printf("Enter the input :");
scanf("%s",input);
while(state==1 || state==2)
{
switch(state)
{
case 1: if(isalpha(input[ip])|| input[ip]=='_')
	{
	state=2;
	ip++;
	}
	else
	{ printf("Invalid\n");
	exit(0);
	}
	break;
	
case 2: if(isdigit(input[ip]||isalpha(input[ip])))
{
	state =2;
	ip++;
}
else if(input[ip]=='&'||input[ip]=='!'||input[ip]=='@'||input[ip]=='#'||input[ip]=='$'||input[ip]=='%'||input[ip]=='^'||input[ip]=='*')
{
	state=4;
}
else
{
	state=3;
}
break;
}
}
if(state ==3 )
{
	printf("valid\n");
}
else
{
	printf("invalid\n");
}
}
