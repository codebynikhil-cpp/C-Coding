#include<stdio.h>
#include<string.h>
#define MAX 10
char st[MAX];
int top=-1;
void push ( char c)
{
if(top==MAX-1)
printf("stack is full");
else
{
top = top + 1;
st[top ] = c;
}
}
void pop ( )
{
if(top == -1)
printf("stack is empty");
else
{ top =
top -
1;
}
} int prec(char c)
{
if (c == '^')
return 3;
else if (c == '/' || c == '*')
return 2;
else if (c == '+' || c == '-')
return 1;
else
return -1;
}
void infixToPostfix(char *s)
{
int n=strlen(s);
for (int i = 0; i < n; i++)
{
char c = s[i];
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
printf("%c ",c);
else if (c == '(')
push('(');
else if (c == ')')
{
while (st[top] != '(')
{
printf("%c ",st[top]);
pop();
}
pop();
}
else if(prec(c) >prec(st[top]))
push(c);
else {
while (top!=-1 && prec(c) <= prec(st[top]))
{
printf("%c ",st[top]);
pop();
}
push(c);
}
}
while (top!=-1)
{
printf("%c",st[top]);
pop();
}
}
int main()
{
char exp[20];
printf("Enter the Infix expression:");
scanf("%s",exp);
infixToPostfix(exp);
return 0;
}