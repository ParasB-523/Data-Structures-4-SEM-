#include<stdio.h>
#include<stdlib.h>
#define N 20

struct stack
{
    int data[N];
    int top;
}*num, s;

void push( struct stack *num, FILE *fp1, int max )
{
    int data;
    if( num->top == N-1 )
    {
        printf("Stack Overflow\n");
    }
    else
    {
        for( int i = 0; i < max; i++)
        {
            num->top++;
            fscanf(fp1,"%d", &data);
            printf("%d\n", data);
            num->data[num->top] = data;
        }
    }
}

int pop( struct stack *num)
{
    int data;
    if( num->top == -1 )
    {
        printf("Stack Underflow\n");
    }
    else
    {
        data = num->data[num->top];
        num->top--;
        return data;
    }
}

void display ( struct stack *num )
{
    int i;
    if( num->top == -1 )
        printf("Stack is Empty\n");
    else
    {
        for( i = num->top; i >= 0; --i )
        {
            if( i == 0 )
                printf("%d\n", num->data[i]);
            else
                printf("%d->", num->data[i]);
        }
    }
}

int main()
{
    FILE *fp1,*fp2;
    fp1 = fopen("number.txt","r");
    fp2 = fopen("numberoutput.txt","w");
    int data, ch, max;
    num = &s;
    num->top = -1;
    while(1)
    {
        printf("Enter your choice\n");
        printf("1.Push\t 2.Pop\t 3.Display\t 4.Exit\n");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: fscanf(fp1,"%d", &max);
                    push( num , fp1, max);
                    break;
            case 2: for( int i = 0; i < max; i++)
                    {
                        data = pop( num );
                        printf("%d popped \n", data);
                        data = data*2;
                        fprintf(fp2,"%d\t",data);
                    }
                    break;
            case 3: display( num );
                    break;
            case 4: exit(0);
                    break;
            default : printf("Invalid choice\n");
                      break;
        }
    }
    return 0;
}

