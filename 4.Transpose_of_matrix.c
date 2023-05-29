#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define N 10

int main()
{
    FILE *fp1;
    fp1 = fopen("matrix.txt", "r+");
    int R,C;
    fscanf(fp1,"%d", &R);
    fscanf(fp1,"%d", &C);
    int matrix[N][N];
    for( int i = 0;  i < R; i++)
    {
        for( int j = 0; j < C; j++ )
        {
            fscanf(fp1,"%d", &matrix[i][j]);
        }
    }
    for( int i = 0;  i < R; i++)
    {
        for( int j = 0; j < C; j++ )
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    for( int j = 0;  j < R; j++)
    {
        for( int i = 0; i < C; i++ )
        {
            printf("%d\t", matrix[i][j]);
            fprintf(fp1,"%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    fprintf(fp1,"\n");
    fclose(fp1);
    return 0;
}
