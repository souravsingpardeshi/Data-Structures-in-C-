//evaluation
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int stack[20];
int top=-1;
void push(int x)
{
  stack[++top]=x;
}
int pop()
{
  return stack[top--];
}
int main()
{
  char exp[20];
  char *e;
  int n1,n2,n3,num;
  printf("\n\tEnter the expression here:\t");
  scanf("%s",exp);
  e=exp;
  while(*e!='\0')
  {
    if(isdigit(*e))
{
  num=*e-48;
  push(num);
}
else
{
  n1=pop();
  n2=pop();
  switch(*e)
  {
    case '+':
    n3=n1+n2;
    break;
    case '-':
    n3=n2-n1;
    break;
    case '*':
    n3=n1*n2;
    break;
    case '/':
    n3=n2/n1;
    break;
  }
  push(n3);
}
e++;
  }
  printf("\n\n\tthe result of expression is:%s : %d\n\n",exp,pop());
  return 0;
}
