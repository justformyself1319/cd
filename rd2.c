#include<stdio.h>
char input[20];
int ip=0;
int s();
int main()
{
    printf("Enter the String : ");
    scanf("%s",input);
    if(s())
    {
        if(input[ip]=='\0')
            printf("string is accepted\n");
        else
            printf("String is not accepted\n");
    }
    else
    {
        printf("String is not accepted\n");
    }
    return 0;
   
    
}
int s()
{
    int isave=ip;
    if(input[ip]=='a')
    {   
        ip++;
        if(s())
        {
            if(input[ip]=='a')
            {
                ip++;
                return 1;
            }
        }
    }
    ip=isave;
    if(input[ip]=='a')
    {
        ip++;
        if(input[ip]=='a')
        {
            ip++;
            return 1;
        }
    }
    return 0;
}