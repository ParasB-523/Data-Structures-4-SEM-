// C-Program to determine the matrix is symmetric or not.//
/* Name : Paras Bharatesh Bennadi
   Class : 'E' Division
   Roll no.: 513
   USN : 01fe21bec256
   Program Name : Symmetric_Matrices
   Date : 18-05-2023
*/
#include<stdio.h>
#include<stdlib.h>
#define N 20

void add_elements( FILE *f, int arr[N][N], int R, int C )
{
    for( int i = 0; i < R; i++ )
    {
        for( int j = 0; j < C; j++ )
            fscanf(f,"%d", &arr[i][j]);
    }
}

void check_sym( int arr[N][N], int R, int C )
{
    int num = arr[0][0];
    for( int i = 0; i < R; i++)
    {
        if( arr[i][i] != num )
        {
            printf("The Matrix is not symmetric\n");
            exit(0);
        }
    }
    for( int i = 0; i < R; i++)
    {
        for( int j = 0; i < C; i++)
        {
            if( arr[i][j] != arr[j][i] )
            {
                printf("The Matrix is not symmetric\n");
                exit(0);
            }
        }
    }
}


int main()
{
    FILE *f;
    f  = fopen("Matrix.txt","r");
    int R, C;
    fscanf(f,"%d%d", &R, &C);
    if( R != C )
    {
        printf("The order is not of a Square Matrix\n");
        exit(0);
    }
    int arr[N][N];
    add_elements( f, arr, R, C );
    for( int i =0; i < R; i++)
    {
        for( int j =0; j < R; j++)
            printf("%d\t", arr[i][j]);
    }
    check_sym( arr, R, C );
    fclose(f);
    return 0;
}
