#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *link;
};
int main()
{
  struct node *start;
  start=NULL;
  struct node *temp;
  struct node *cur;
  int i,num,ch;
  do{
  printf("\n\twelcome to operation on linked list\n");
  printf("\n\t1.insertion\n\t2.delete a node\n\t3.display\n\t4.exit\n\tchoice:\t");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
    temp=(struct node*)malloc(sizeof(struct node));
    if(start==NULL)
    {
      printf("\nEnter the element to be inserted:\n");
      scanf("%d",&num);
      start=temp;
      temp->data=num;
      temp->link=NULL;
    }
    else
    {
      printf("\nEnter the element to be inserted:\n");
      scanf("%d",&num);
      temp->data=num;
      temp->link=start;
      start=temp;
    }
    break;
    case 2:
    if(start==NULL)
    {
      printf("\n\tlist is empty\n");
    }
    else if(start->link==NULL)
    {
      num=start->data;
      start=NULL;
      printf("\n\tdeleted element is %d:",num);
    }
    else
    {
      num=start->data;
      start=start->link;
      printf("\n\tdeleted element is %d:",num);
    }

    break;
    case 3:
    cur=start;
    if(cur=NULL)
    {
      printf("\ngiven list is empty:");
    }
    else{
    while(cur!=NULL)
    {
      printf("\n\t%d",start->data);
      cur=cur->link;
    }
  }
    break;
  }
}while(ch<4);
return 0;
}
