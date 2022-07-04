#include<stdio.h>
char input[20];
int ip=0;
int S();
int A();
void main()
{

    printf("Enter the String : ");
    scanf("%s",input);
    int i=S();
    if(i==1)
    {
        printf("String is accepted");
    }
    else
    {
        printf("String is not accepted");
    }
}
int S()
{
    if(input[ip]=='c')
    {   
        ip++;
        if(A())
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
int A()
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
