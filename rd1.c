#include<stdio.h>
#include<stdlib.h>
char input[20];
int ip=0;
void E();
void T();
void Ep();
void Tp();
void F();
void error();

void main()
{
    printf("Enter the input: ");
    scanf("%s",&input);
    E();
    if(input[ip]=='$')
    {
        printf("String accepted\n");
    }
    else{
        printf("String is not accepted\n");
    }
}
void E()
{
    T();
    Ep();
}
void T()
{
    F();
    Tp();
}
void Ep()
{
    if(input[ip]=='+')
    {
        ip++;
        T();
        Ep();
    }
}
void Tp()
{
    if(input[ip]=='*')
    {
        ip++;
        F();
        Tp();
    }
}
void F()
{
    if(input[ip]=='(')
    {
        ip++;
        E();
        if(input[ip]==')')
        {
            ip++;
        }
        else{
            error();
        }
    }
    else if(input[ip]=='i')
    {
        ip++;
    }
    else
    {
        error();
    }
}
void error()
{
    printf("Invalid input\n");
    exit(0);
}