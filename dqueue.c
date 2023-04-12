//DQUEUE
#include<stdio.h>
#define max 5
int front,rear,q[max],val,out;
int ins_f(int);
int ins_r(int);
int del_f(int);
int del_r(int);
int display(int);
int ins_r(int val)
{
    if(rear>=max)
    {
        printf("queue is full\n");
    }
    else
    {
        printf("enter element:");
        scanf("%d",&val);
        rear=rear-1;
        q[rear]=val;
    }
}
int ins_f(int val)
{
    if(front<=-1)
    {
        printf("queue is full\n");
    }
    else
    {
        printf("enter element:");
        scanf("%d",&val);
        front=front+1;
        q[rear]=val;
    }
}
int del_f(int val)
{
    if(front>=max)
    {
        printf("queue is empty\n");
    }
    else
    {
        front=front-1;
    }
}
int del_r(int val)
{
    if(rear<=-1)
    {
        printf("queue is empty\n");
    }
    else
    {
        front=front+1;
    }
}
int display(int val)
{
    int i;
    for(i=front;i<rear;i++)
    {
        printf("%d\n",q[i]);
    }
}
int main()
{
    int n,n1,n2;
    out:
    printf("Enter your choice\n 1)insert from rear and delete from front \n 2)delete from front and insert from rear \n 3)display \n 4)exit \n");
    scanf("%d",&n);

    switch(n)
    {
    case 1:
        do
        {
        go:
        printf("enter your choice \n 5)insert from rear \n 6)delete from front \n 7)go to main menu \n");
        scanf("%d",&n1);
        switch(n1)
        {
        case 5:
            ins_r(val);
            break;
        case 6:
            del_f(val);
            break;
        case 7:
            goto go;
            break;
        default :
            printf("enter valid choice\n");
            break;
        }
        }
        while(n1!=7);

        break;
        case 2:
            do
            {
        exit:
        printf("enter your choice \n 8)insert from front\n 9)delete from rear \n 10)go to main menu \n");
        scanf("%d",&n2);
        switch(n2)
        {
        case 8:
            ins_f(val);
            break;
        case 9:
            del_r(val);
            break;
        case 10:
            goto exit;
            break;
        default :
            printf("enter valid choice\n");
            break;
        }
            }
            while(n2!=10);

        break;
        case 3:
            display(val);
            break;
        case 4:
            goto out;
            break;
        default :
            printf("enter valid choice\n");
            break;


    }
}
