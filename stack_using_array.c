#include<stdio.h>
#define size 5
int main()
{
  char st[size];
  int tos;
  tos=-1;
  int i,ch,num;
do{
  printf("\nwelcome to impolementation of stack using array:\n");
  printf("\n\t1.push\n\t2.pop\n\t3.display\n\t4.exit\nchoice:");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
    if(tos==(size-1))
    {
      printf("\nstack overflow");
    }
    else
    {
      printf("\nenter the element to be inserted\n");
      scanf("%d",&num);
      tos++;
      st[tos]=num;
    }
    break;
    case 2:
    if(tos==-1)
    {
      printf("\nstack underflow\n");
    }
    else
    {
      num=st[tos];
      tos--;
printf("\nelement deleted is %d",num);
    }
    break;
    case 3:
    for(i=0;i<=tos;i++)
    {
      printf("\n%d",st[i]);
    }
    break;
  }
}while(ch<4);
return 0;
}
