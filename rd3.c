#include<stdio.h>
char input[20];
int ip=0;
int s();
int a();
void main()
{

    printf("Enter the String : ");
    scanf("%s",input);
    int i=s();
    if(i==1)
    {
        printf("String is accepted");
    }
    else
    {
        printf("String is not accepted");
    }
}
int s()
{
    if(input[ip]=='c')
    {   
        ip++;
        if(a())
        {
            ip++;
            if(input[ip]=='d')
            {
                return 1;
            }
        }
    }
    return 0;
}
int a()
{
    int isave=ip;
    if(input[ip]=='a')
    {
        return 1;
    }
     ip=isave;
    if(input[ip]=='a')
    {
        ip++;
        if(input[ip]=='b')
        {
            return 1;
        }
    }
   
    
    return 0;
}