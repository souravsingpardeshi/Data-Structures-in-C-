#include<stdio.h>
#define size 5
int main()
{
  char q[size];
  int front=-1;
  int rear=0;
  int i,ch,num;
  do{
  printf("\n\twelcome to queue using array\n");
printf("\n\t1.enqueue\n\t2.dequeue\n\t3.dispaly\n\t\tchoice:");
scanf("%d",&ch);
switch(ch)
{
  case 1:
  if(front==(size-1))
  {
    printf("\nqueue is overflow\n");
  }
  else
  {
    printf("\n\tenter the value to be added\n");
    scanf("%d",&num);
    front++;
    q[front]=num;
  }
  break;
  case 2:
  if(front==-1)
  {
    printf("\n\tqueue is empty\n");
  }
  else
  {
    num=q[rear];
    rear++;
    printf("\nelement deleted is %d",num);
  }
  break;
  case 3:
  for(i=rear;i<=front;i++)
  {
    printf("\n%d",q[i]);
  }
}
}while(ch<4);
}
