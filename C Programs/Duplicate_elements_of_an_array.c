// C-Program to determine the frequency of numbers read from an Array//
/* Name : Paras Bharatesh Bennadi
   Class : 'E' Division
   Roll no.: 513
   USN : 01fe21bec256
   Program Name : Duplicate_elements_an_array
   Date : 18-05-2023
*/
#include<stdio.h>
#include<stdlib.h>
#define N 20

void add_elements( int arr[N]);
int search( int ele );
int frequency( int arr[N], int num );
int occurence( int arr[N], int i );

int main()
{
    int i,num, freq, status, occ;
    int arr[N];
    add_elements( arr );
    printf("The elements of the array are:\n");
    for( int i = 0; i < N; i++ )
        printf("%d\t", arr[i]);
    printf("\n");
    for( i = 0; i < N; i++ )
    {
        num = arr[i];
        status = search( num );
        if( status == 0 )
            continue;
        freq = frequency( arr, num );
        printf("Frequency of %d = %d\n", num, freq );
    }
    for ( i = 0; i < 10; i++ )
    {
        occ = occurence( arr, i );
        printf("No. of occurences of %d = %d\n", i, occ );
    }
    return 0;
}

void add_elements( int arr[N] )
{
    FILE *f;
    f  = fopen("Log.txt","r");
    for( int i = 0; i < N; i++ )
        fscanf(f,"%d", &arr[i]);
    fclose(f);
}

int search( int ele )
{
    int i, status, n = 0;
    int arr_ele[N] = {0};
    for( i = 0; i < n; i++ )
    {
        if( arr_ele[i] == ele )
        {
            status = 0;
            break;
        }
        else
            status = 1;
    }
    return status;
}

int frequency( int arr[N], int num )
{
    int c = 0;
    for( int i = 0; i < N; i++ )
    {
        if( arr[i] == num )
           c++;
    }
    return c;
}
int occurence( int arr[N], int i )
{
    int num, dig, occ = 0;
    for( int j = 0; j < N; j++ )
    {
        num = arr[j];
        while( num != 0 )
        {
            if( num%10 == i )
                occ++;
            num = num/10;
        }
    }
    return occ;
}
