// C-Program to sort the numbers read from Files in C .//
/* Name : Paras Bharatesh Bennadi
   Class : 'E' Division
   Roll no.: 513
   USN : 01fe21bec256
   Program Name : Sorting_from_files
   Date : 13-04-2023
*/
#include<stdio.h>
#include<stdlib.h>
#define N 20

void bubble_sort(int num[N], int n)
{
    int temp;
    for( int i = 0; i < n-2; i++ )
    {
        for( int j = 0; j < n-2-i; j++ )
        {
            if( num[j] > num[j+1] )
            {
                temp = num[j+1] ;
                num[j+1] = num[j];
                num[j] = temp;
            }
        }
    }
}

void display( int num[N], int n )
{
    for( int i = 0; i < n; i++ )
        printf("%d\t", num[i]);
}

int num[N];

int main()
{
    FILE *fp1, *fp2;
    int i, n;
    fp1 = fopen("number.txt","r");
    fp2 = fopen("numberoutput.txt","w");
    if( fp1 == NULL )
    {
        printf("File number.txt does not exist\n");
        exit(0);
    }
    fscanf(fp1,"%d",&n);
    for(i=0; i<n; i++)
    {
        fscanf(fp1,"%d", &num[i]);
        printf("Number read from the file number.txt is %d\n", num[i]);
    }
    fclose(fp1);
    bubble_sort( num, n );
    display( num, n );
    for( i = 0; i < n; i++ )
        fprintf(fp2,"%d\t", num[i]);
    fclose(fp2);
    return 0;
}
