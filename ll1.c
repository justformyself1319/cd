#include<stdio.h>
#include<strings.h>
#include<stdlib.h>
char stack[20];
char input[20];
int ip=0;
int top=0;
void printstack()
{
    for(int i=0;i<=top;i++)
    {
        printf("%c",stack[i]);
    }
}
void printinput()
{
    for(int i=ip;i<=sizeof(input);i++)
    {
        printf("%c",input[i]);
    }
}
void parsingt(char a,char b)
{
    switch(a)
    {
        case 'E':
            //printf("%c %c",a,b);
            if(b=='d')
            {
                stack[top++]='A';
                stack[top]='T';
                
            }
            else if(b=='(')
            {
                stack[top++]='A';
                stack[top]='T';
            }
            else{
                printf("No ELement Found in the parsing table ERROR1\n");
                exit(0);
            }
            break;
        case 'A':
            if(b=='+')
            {
                
                stack[top++]='A';
                stack[top++]='T';
                stack[top]='+';
            }
            else if(b==')' || b=='$'||b=='\0')
            {
                top--;
            }
            else{
                printf("No ELement Found in the parsing table ERROR2\n");
                exit(0);
            }
            break;
        case 'T':
            if(b=='d' || b=='(')
            {
                stack[top++]='B';
                stack[top]='F';
            }
            else{
                printf("No ELement Found in the parsing table ERROR3\n");
                exit(0);
            }
            break;
        case 'B':
            
            if(b=='+'|| b==')')
            {
                top--;
            }
            else if(b=='$'|| b=='\0')
            {
                //printf("hi");
                top--;
            }
            else if(b=='*')
            {
                stack[top++]='B';
                stack[top++]='F';
                stack[top]='*';
            }
            else{
                printf("No ELement Found in the parsing table ERROR4\n");
                exit(0);
            }
            break;
        case 'F':
            if(b=='d')
            {
                stack[top]='d';
                
            }
            else if(b=='(')
            {
                stack[top++]=')';
                stack[top++]='E';
                stack[top]='(';
            }
            else{
                printf("No ELement Found in the parsing table ERROR5\n");
                exit(0);
            }

    }
}
int main()
{
    stack[top++]='$';
    stack[top]='E';
    printf("Enter the Input string to be Parsed : ");
    scanf("%s",input);
    int len=sizeof(input);
    input[len]='$';
    printf("Stack ELements : \t\t Input Element: \n");
    
    while(1)
    {
        
        if(stack[top]=='$'&& (input[ip]=='$'|| input[ip]=='\0'))
        {
            printf("\nSuccessfully Parsed \n");
            exit(1);
        }
        else if(stack[top]==input[ip])
        {
           // printf("%c,%c",stack[top],input[ip]);
            top--;
            if(input[ip]!='$')
                ip++;
            
        }
        else
        {
            printstack();
            printf("\t\t\t\t\t");
            printinput();
            printf("\n");
            //printf("%c%c",stack[top],input[ip]);
            parsingt(stack[top],input[ip]);
            
            
           
        }
    }
}