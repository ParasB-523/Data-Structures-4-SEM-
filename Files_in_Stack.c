// C-Program to demonstrate usage and operations on Stacks with Files in C .//
/* Name : Paras Bharatesh Bennadi
   Class : 'Q' Division
   Roll no.: 513
   USN : 01fe21bec256
   Program Name : Files_in_Stack
   Date : 15-05-2022
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

#define N 20

//Data Structure Declaration
struct stack
{
    int data[N];
    int top;
}*s, p;

//Function Prototype
void push( struct stack *s, FILE *fp1, FILE *fp2, FILE *fp4, FILE *fp5 );
int pop( struct stack *s, FILE *fp3, FILE *fp4, FILE *fp5 );
int peek( struct stack *s );
void display ( struct stack *s );

void main()
{
    s=&p;
    int ch, num, top_num;
    FILE *fp1,*fp2,*fp3,*fp4,*fp5;
    fp1 = fopen("Stack.txt","a");
    fp2 = fopen("Push.txt","a");
    fp3 = fopen("Pop.txt","a");
    fp4 = fopen("Operations.txt","a");
    fp5 = fopen("Log.txt","r");
    s->top = -1;
    while(1)
    {
        printf("Enter your choice\n");
        printf("1. Push\t2. Pop\t3. Peek\t4. Display\t5. Exit\n");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: push( s, fp1, fp2, fp4, fp5 );
                    break;
            case 2: fclose(fp1);
                    num = pop( s, fp3, fp4, fp1 );
                    printf("%d popped out\n", num);
                    break;
            case 3: top_num = peek( s );
                    printf("%d is the top number in the stack\n", top_num);
                    break;
            case 4: display( s );
                    break;
            case 5: exit(0);
                    break;
            default : printf("Invalid choice\n");
                      break;
        }
    }
}

void push( struct stack *s, FILE *fp1, FILE *fp2, FILE *fp4, FILE *fp5 )
{
    int num;
    fscanf(fp5,"%d", &num);
    if( s->top == N-1 )
        printf("Stack Overflow\n");
    else
    {
        printf("The number pushed is %d\n", num);
        s->top++;
        s->data[s->top] = num;
        fprintf(fp1,"%d\n", num);
        fprintf(fp2,"%d\n", num);
        fprintf(fp4,"Push %d\n", num);
    }
}

int pop( struct stack *s, FILE *fp3, FILE *fp4, FILE *fp1 )
{
    int num;
    if( s->top == -1 )
    {
        printf("Stack Underflow\n");
    }
    else
    {
        fp1 = fopen("Stack.txt","w");
        num = s->data[s->top];
        s->top--;
        for( int i = 0; i <= s->top; i++ )
        {
            fprintf(fp1,"%d\n", s->data[i]);
        }
        fprintf(fp3,"%d\n", num);
        fprintf(fp4,"Pop %d\n", num);
        return num;
    }
}
int peek( struct stack *s )
{
    int num;
    if( s->top == -1 )
        printf("Stack is Empty\n");
    else
    {
        num = s->data[s->top];
        return num;
    }
}
void display ( struct stack *s )
{
    int i;
    if( s->top == -1 )
        printf("Stack is Empty\n");
    else
    {
        for( i = s->top; i >= 0; --i )
        {
            if( i == 0 )
                printf("%d\n", s->data[i]);
            else
                printf("%d->", s->data[i]);
        }
    }
}
