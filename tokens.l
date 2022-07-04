letter  [A-Za-z]
digit   [0-9]
%%

[+*/<>!&|=] {printf("%s is a operator",yytext);}
[++>><<==+=-=*=/=%=]{2} {printf("%s is a operator",yytext);}
if|else|do|while|break|elseif|switch|for|continue|case|exit|main|int|float|char|long|double {printf("%s is a keyword",yytext);}
{letter}({letter}|{digit})* {printf("%s is an identifier",yytext);}
{digit}({digit})* {printf("%s is an constants",yytext);}
{digit}({letter}|{digit})* {printf("%s is not a token",yytext);}

%%

int yywrap(void)
{
    return 0;
}
int main()
{
    yylex();
    return 0;

}