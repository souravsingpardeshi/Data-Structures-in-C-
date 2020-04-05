#include<stdio.h>
#define size 5
struct stack
{
  int st[size];
  int tos;
};
int main()
{
  struct stack s;
  s.tos=-1;
  int ch,num;
do{
  printf("\n\twelcome to implementation of stack using structure\n");
  printf("\n\t1.push\n\t2.pop\n\t3.display\n\t4.exit");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
    if(s.tos==(size-1))
    {
      printf("\n\tstack overflow\n");
    }
    else
    {
      printf("\nenter the value to be entered\n");
      scanf("%d",&num);
      s.tos++;
      s.st[s.tos]=num;
    }
    break;
    case 2:
if(s.tos==-1)
{
  printf("\n\tstack underflow\n");
}
else
{
    num=s.st[s.tos];
    s.tos--;
    printf("\n\telement deleted is %d",num);
  }
  break;
  case 3:
  for(int i=0;i<=s.tos;i++)
  {
    printf("\n\t%d",s.st[i]);
  }
  break;
  }
}while(ch<4);
return 0;
}
